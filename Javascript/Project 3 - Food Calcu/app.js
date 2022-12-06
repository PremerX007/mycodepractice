let qrt = prompt("จำนวนสินค้า")
var sum = 0
for(var i=1; i<=qrt; i++){
    let price = prompt("ราคาสินค้าชิ้นที่ " + i)
    document.getElementById("price-list").innerHTML += "No." + i + " : " + price + " บาท" + "<br>"    
    sum = sum + Number(price)
}

document.getElementById("result").innerHTML = "ราคารวม " + sum + "บาท"