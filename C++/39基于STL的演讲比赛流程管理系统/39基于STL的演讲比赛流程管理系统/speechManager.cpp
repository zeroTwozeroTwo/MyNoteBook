#include "speechManager.h"
#include <cstdlib>

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ�����Ժ�����
	this->initSpeech();

	//����12��ѡ��
	this->createSpeacker();

	//���������¼
	this->loadRecord();
}

//��ʾ�˵�
void SpeechManager::show_Menu()
{
	cout << "****************************************" << endl;
	cout << "*********** ��ӭ�μ��ݽ����� ***********" << endl;
	cout << "************ 1.��ʼ�ݽ����� ************" << endl;
	cout << "************ 2.�鿴�����¼ ************" << endl;
	cout << "************ 3.��ձ�����¼ ************" << endl;
	cout << "************ 0.�˳��������� ************" << endl;
	cout << "****************************************" << endl;
	cout << endl;
}

//��ʼ�����Ժ�����
void SpeechManager::initSpeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	this->m_Record.clear();

	//��ʼ����������
	this->m_Index = 1;
}

//����12��ѡ��
void SpeechManager::createSpeacker()
{
	string nameSeed = "ABCDEFJHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		Speaker speaker;
		speaker.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			speaker.m_Score[j] = 0;
		}

		//����ѡ�ֱ�� ���ҷ��뵽v1������
		this->v1.push_back(i + 10001);

		//ѡ�ֱ�ż���Ӧѡ�� ���뵽map������
		this->m_Speaker.insert(make_pair(i + 10001, speaker));
	}
}

//��ʼ���� �����������̿��ƺ���
void SpeechManager::startSpeech()
{
	//��һ�ֿ�ʼ����

	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ�������
	this->showScore();
	//�ڶ��ֿ�ʼ����
	this->m_Index++;
	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ���ս��
	this->showScore();
	//4.����������ļ���
	this->saveRecord();

	//���ñ���,��ȡ��¼
	//��ʼ�����Ժ�����
	this->initSpeech();

	//����12��ѡ��
	this->createSpeacker();

	//���������¼
	this->loadRecord();

	cout << "����������" << endl;
	system("pause");
	system("cls");
}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "��<<" << this->m_Index << ">> �ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "-------------------------" << endl;
	cout << "��ǩ���ݽ�˳������: " << endl;
	if (this->m_Index == 1)
	{
		//��һ�ֱ���
		random_shuffle(this->v1.begin(), this->v1.end());
		for (vector<int>::iterator it = this->v1.begin(); it != this->v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;

	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(this->v2.begin(), this->v2.end());
		for (vector<int>::iterator it = this->v2.begin(); it != this->v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;

	}

	cout << "--------------------------------" << endl;
	system("pause");
	cout << endl;
}

//����
void SpeechManager::speechContest()
{
	cout << "---------��" << this->m_Index << "�ֱ�����ʽ��ʼ----------" << endl;

	//׼����ʱ���� ���С��ɼ�
	multimap<double, int, greater<double>> groupScore;

	int num = 0;//��¼��Ա���� 6��һ��

	vector<int> v_Src;
	if (this->m_Index == 1)
	{
		v_Src = this->v1;
	}
	else
	{
		v_Src = this->v2;
	}

	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//��ί���
		deque<double> d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f; // 600 - 1000
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(), greater<double>());
		d.pop_front();//ȥ����߷�
		d.pop_back();//ȥ����ͷ�

		double sum = accumulate(d.begin(), d.end(), 0.0f);//�ܷ�
		double avg = sum / (double)d.size();//ƽ����

		//��ӡƽ����
		//cout << "���:" << *it << "\t����:" << this->m_Speaker[*it].m_Name << "\t��ȡƽ����:" <<
		//	avg << endl;

		//��ƽ���ַ��뵽map������
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

		//��������� ������ʱС��������
		groupScore.insert(make_pair(avg, *it));//key�ǵ÷�,value�Ǿ���ѡ�ֱ��
		//ÿ6��ȡ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С�������������:" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "���:" << it->second << "\t����:" << this->m_Speaker[it->second].m_Name << "\t�ɼ�:"
					<< this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}

			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back(it->second);
				}
				else
				{
					this->vVictory.push_back(it->second);
				}
			}
			cout << endl;
			//С���������
			groupScore.clear();
		}
	}
	cout << endl;
	cout << "---------------��" << this->m_Index << "�ֱ������!-----------------" << endl;
	system("pause");
}

//��ʾ�÷�
void SpeechManager::showScore()
{
	cout << "------------------��" << this->m_Index << "�ֽ���ѡ����Ϣ����:--------------------" << endl;

	vector<int> v;
	if (this->m_Index == 1)
	{
		v = this->v2;
	}
	else
	{
		v = this->vVictory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�ֱ��:" << *it << "\t����:" << this->m_Speaker[*it].m_Name << "\t�÷�:" <<
			this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}

//�����¼
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//��׷�ӷ�ʽд�ļ�
	//��ÿ��ѡ������ д�뵽�ļ���
	for (vector<int>::iterator it = this->vVictory.begin(); it != this->vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	//�ر�
	ofs.close();

	cout << "��¼�Ѿ�����" << endl;

	//�����ļ���Ϊ��״̬
	this->fileIsEmpty = false;
}

//��ȡ��¼
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//���ļ�
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//�ļ����
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->fileIsEmpty = true;
		//cout << "�ļ�Ϊ��" << endl;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch);//�������ȡ�ĵ����ַ�,�ٷŻ���
	string data;
	int index = 0;
	while (ifs >> data)
	{
		vector<string> v;//���6��string�ַ���
		int pos = -1;//����","λ�õı���
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//û���ҵ����
				break;
			}
			string temp = data.substr(start, pos - start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
}

//��ʾ�����¼
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�������!" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "��"
				<< "\t�ھ����:" << this->m_Record[i][0] << "\t�÷�" << this->m_Record[i][1] << " "
				<< "\t�Ǿ����:" << this->m_Record[i][2] << "\t�÷�" << this->m_Record[i][3] << " "
				<< "\t�������:" << this->m_Record[i][4] << "\t�÷�" << this->m_Record[i][5] << " "
				<< endl;
		}
	}
	system("pause");
	system("cls");

}


//����ļ�
void SpeechManager::clearRecord()
{
	cout << "�Ƿ�ȷ������ļ�?" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;

	int select = 0;
	cin >> select;
	if(select == 1)
	{
		//ȷ�����
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//��ʼ�����Ժ�����
		this->initSpeech();

		//����12��ѡ��
		this->createSpeacker();

		//���������¼
		this->loadRecord();

		cout << "��ճɹ�" << endl;
	}

	system("pause");
	system("cls");
	
}

//�˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//��������
SpeechManager::~SpeechManager()
{

}