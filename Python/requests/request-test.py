import requests
import time


r = requests.get("https://pypi.org/project/requests/")
r.encoding
content =r.content
f =open("./asd.html","a")
f.write(str(content))
f.close()
time.sleep(2)
s = requests.get("https://requests.readthedocs.io/en/latest/")
s.encoding
content2= s.content
f =open("./asd2.html","w")
f.write(str(content2))
f.close()
time.sleep(2)
print("asd")
