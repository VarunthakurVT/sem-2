//set time out --clear timeout

console.log("first")
setTimeout(()=>{
    console.log("a sync task")},0)
    let timer=setTimeout(()=>{
    console.log("a sync task after 1 second")},1000)
    //it is used to like delay print anything syntax--setTimeout(function,time in ms)
    setTimeout(()=> {console.log("this run after 2 second")},2000)
    console.log("secondtimeout")
    clearTimeout(timer)
 

    //async code js run time 
    // call stack  