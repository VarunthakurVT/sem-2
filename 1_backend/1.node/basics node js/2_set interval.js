function sayHello() {
  console.log("Hello every second!");
}

const intervalId = setInterval(sayHello, 1000);  // Runs every 1 second
setTimeout(()=>{clearInterval(intervalId)},2000) //it clear the interval so interval stops here