#importing the requests module for api integration
import requests
#importing num2words to convert the the rate we recieved from the rest api
from num2words import num2words

base_url = "https://api.coindesk.com/v1/bpi/currentprice.json"

#storing the response into an object of requests
response = requests.get(base_url)

#converting the requests object into a json object (similar to python dictionary)
real_object = response.json()

bpi = real_object['bpi']
data = dict()
#looping so we can store the in-words form of the integer part 
for key in bpi:
    temp = bpi[key]['rate_float']
    data[key] = num2words(int(temp))

#print the data
for key in data:
    print(f"{key} rate = {data[key]}")

