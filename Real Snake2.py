#number_one = int(input('enter first number :'))
#number_two = int(input('enter second number:'))
 
#total = number_one + number_two
#print('total is ' + str (total ))
import pygame,sys
import  random




pygame.init()



white =(255, 255, 255)
red  = (255, 0, 0)
blue = (0, 0, 255)
green = (0, 255, 0)
black =(0, 0 ,0)

screen_width = 600
screen_height = 600

gameWindow = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("GAME MAKE BY TIKESHWAR") # titel 
pygame.display.update()



exit_game = False
game_over = False

snake_x = 45
snake_y = 55
snake_size = 15 
velocity_x = 0 
velocity_y = 0

apple_x = random.randint(0, screen_width/2) #/2 becuse food was make a outline near
apple_y = random.randint(0, screen_width/2)
score = 0
init_velocity = 5
FPS =30

clock = pygame.time.Clock()
font = pygame.font.SysFont(None, 30)
def text_screen(text,  color, x, y):
    screen_text = font.render(text, True, color)
    gameWindow.blit(screen_text, [x, y])

def plot_snake(gameWindow, blue, snk_list, snake_size):
    for x, y in snk_list:
        pygame.draw.rect(gameWindow, blue, [x, y, snake_size, snake_size])


#make amt snake
snk_list = []
snk_lenth = 1



while not exit_game:
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            exit_game=True
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                velocity_x = + init_velocity
                velocity_y = - 0

            if event.key == pygame.K_LEFT:      # haldiling the left key
                velocity_x = - init_velocity
                velocity_y = + 0  #darection in velocity_y

            if event.key == pygame.K_UP:  # haldiling the uparroy key
                velocity_y = - init_velocity
                velocity_x = + 0

            if event.key == pygame.K_DOWN:      # haldiling the down key
               velocity_y = + init_velocity
               velocity_x = - 0

    snake_x = snake_x + velocity_x
    snake_y = snake_y + velocity_y    

    if abs (snake_x - apple_x)<15 and abs(snake_y - apple_y)<15:  # snake eit the  in oursize
        score +=1    # 1 plus scoreing
        print("Score:", score)

        apple_x = random.randint(20, screen_width/2) #/2 becuse food was make a outline near
        apple_y = random.randint(20, screen_width/2) # apple creat the posion
        snk_lenth +=3 # leth of snake

    gameWindow.fill(green)
    text_screen("Score:" + str(score * 10), red, 5, 5)
    pygame.draw.rect(gameWindow, red, [apple_x, apple_y, snake_size, snake_size])


    head = []
    head.append(snake_x)
    head.append(snake_y)
    snk_list.append(head)

    if len(snk_list)>snk_lenth:     # cheack lenth for snake lenth
        del snk_list[0]

    


   # pygame.draw.rect(gameWindow, black, [snake_x, snake_y, snake_size, snake_size])
    plot_snake(gameWindow, blue, snk_list, snake_size)
    pygame.display.update()
    clock.tick(FPS)
pygame.quit()
quit()
