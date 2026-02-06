//set time out --clear timeout
//set interval --

console.log("first")
setTimeout(()=>{
    console.log("a sync task")},0)
    let timer=setTimeout(()=>{
    console.log("a sync task after 1 second")},1000)
    console.log("secondtimeout")
    clearTimeout(timer)
 

    //async code js run time 
    // call stack  