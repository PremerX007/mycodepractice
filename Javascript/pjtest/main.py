import requests

url = "https://service.mermasisinfo.com:8091/api/machine?branchCode=00011"
data = requests.get(url).json()['WASHER']
# print(data)
print("เครื่องไหนยังว่างเนี่ย?\n\n")
for i in range(len(data)):
    if 'ว่าง' in data[i]['Status']:
        status = data[i]['Status']
    else:
        pass
    print(f"เครื่องที่ {data[i]['Machine']} : {status}")

# print(data[0]['Machine'])