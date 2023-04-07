import requests

kfind = []

for i in range(10669, 50000) :
    kurl = 'https://cdn.intra.42.fr/pdf/pdf/{}/ko.subject.pdf'.format(i)
    print(kurl, i)
    req = requests.get(kurl)
    if ('404 Not Found' not in req.text) :
        print('KO. find idx:', i)
        kfind.append(i)

print('find idx:')
for i in find :
    print(i+' ')

