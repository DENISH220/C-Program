import pygame
import random
import time
from pygame.locals import *

pygame.init()
pygame.mixer.init()
pygame.mixer.music.load('Video Game Guitar Sound, Video Games Unplugged - Wiggle (guitar version) (guitar version) my-free-mp3s.com .mp3')


display_width = 800
display_height = 700

gameDisplay = pygame.display.set_mode((display_width,display_height))
pygame.display.set_caption('KING GAMES')

# colors

pink = (255, 55, 255)
haph_blue = (55, 255, 255)
red = (255, 0, 0)
yellow = (255, 170, 29)
grey = (55, 55, 55)
black = (0,0,0)
white = (255,255,255)

clock = pygame.time.Clock()
crashed = False
bumped = False




def game_loop():
    pygame.mixer.music.play()
    carImg = pygame.image.load('images copy.png')
    logo = pygame.image.load('gamedev copy.png')
    grass = pygame.image.load('road.png').convert()
    coin = pygame.image.load('coin.png')
    boom = pygame.image.load('bhoom copy.png')
    coin_x = random.randint(2, display_width/1)
    coin_y = random.randint(2, display_width/1)

    font = pygame.font.SysFont(None, 50)
    def text_screen(text, color, x, y):
        text_screen = font.render(text, True, color)
        gameDisplay.blit(text_screen, [x, y])

        



    def message_display(text):
        largetext = pygame.font.Font("Your Accident go Home", 80)
        text_screen = text_objects(text, largetext)
        textrect.center = ((display_width/2), (display_height/2))
        gamedisplay.blit(text_screen, textrect)
        pygame.display.update()
        time.sleep(4)
        game_loop()


    def crash():
        message_display = ("Your Accident go Home")
       
            





    z = 0
    x2 = -7

    
    def car(x,y):
        gameDisplay.blit(carImg, (x,y))

    x =  (display_width * 0.35)
    y = (display_height * 0.0)
    velocity_x = 0
    velocity_y = 0

    car_speed = 0
    change_x = 0
    score = 0


    crashed = False
    while not crashed:
        if crashed:
            text = text_screen("Your Accident go Home", haph_blue, display_width/5, display_height/5)
            pygame.display.update()
        else:
            


            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    crashed = True


                if event.type == pygame.KEYDOWN:

                    
                    if event.key == pygame.K_LEFT:
                        velocity_y = 0
                        velocity_x = -4


                        
                    if event.key == pygame.K_RIGHT:
                        velocity_y = 0
                        velocity_x = 4


                    if event.key == pygame.K_UP:
                        velocity_y = -4
                        velocity_x = 0

                    if event.key == pygame.K_DOWN:
                        velocity_y = 4
                        velocity_x = 0               



            x = x + velocity_x
            y = y + velocity_y

        

            if x<75 or x>display_width or y<0 or y>display_height:
                crashed = True
                
                gameDisplay.fill(grey)
                text = text_screen("Game OVER wait in 1 second ", red, display_width/4, display_height/4)
                gameDisplay.blit(boom, (200, 250))
                pygame.display.update()
                time.sleep(1)
                game_loop()




            gameDisplay.blit(logo, (0, 0))
            rel_x = z/grass.get_rect().width
            gameDisplay.blit(grass, (rel_x - grass.get_rect().width, 0))
            if rel_x < display_width:
                
                gameDisplay.blit(grass, (0, rel_x))
                pygame.display.update()
            car(x,y)
            z -= 12
            pygame.display.update()
            




            
        pygame.display.update()
        clock.tick(60)
game_loop()
pygame.quit()
quit()