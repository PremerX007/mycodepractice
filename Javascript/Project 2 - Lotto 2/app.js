let lotto = prompt("เลขที่คุณจะซื้อ")
let randomnum = Math.floor(Math.random() * 1000)
document.getElementById("input").innerHTML = lotto
document.getElementById("result").innerHTML = randomnum
if (lotto == randomnum){
    document.getElementById("msg").innerHTML = "ยินดีด้วยคุณถูกรางวัล!!!"

}else{
    document.getElementById("msg").innerHTML = "ไม่ถูกรางวัล"
}