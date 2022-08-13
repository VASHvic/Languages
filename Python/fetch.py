import requests
r = requests.get('https://httpbin.org/basic-auth/user/pass', auth=('user', 'pass'))
r2 = requests.get('https://pypi.org/project/requests/', auth=('user', 'pass'))
print(r.json())
print(r.text)
