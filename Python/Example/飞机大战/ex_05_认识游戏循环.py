import pygame

pygame.init()

# 创建游戏的窗口
screen = pygame.display.set_mode((480, 700))

# 绘制背景图像
# 1> 加载图像数据
bg = pygame.image.load("images/background.png")
# 2> blit 绘制图像
screen.blit(bg, (0, 0))  # (0,0) 在游戏屏幕的哪个位置绘制
# 3> update 更新屏幕显示

# 绘制英雄的飞机
hero = pygame.image.load("images/me1.png")
screen.blit(hero, (200, 500))
# 可以在所有绘制完成之后统一调用update
pygame.display.update()

# 创建时钟对象
clock = pygame.time.Clock()

while True:

    # 可以指定循环体内部代码执行的频率
    clock.tick(60)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
