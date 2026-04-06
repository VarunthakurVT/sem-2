function sayHello() {
  console.log("Hello every second!");
}

const intervalId = setInterval(sayHello, 1000);  // Runs every 1 second
setTimeout(()=>{clearInterval(intervalId)},2000) //it clear the interval so interval stops here

//practice  making like stop watch 
let count =0
const interval= setInterval(()=>{
  console.log("count",++count)
  if(count==5){
    clearInterval(interval)
  }
},1000)
