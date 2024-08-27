import requests
import xml.etree.ElementTree as ET
RSS_FEED_URL = "http://www.hindustantimes.com/rss/topnews/rssfeed.xml"
def loadRSS():
resp = requests.get(RSS_FEED_URL)