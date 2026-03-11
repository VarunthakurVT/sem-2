  const http=require("http")
  const path=require("path")
  const myPath="1_backend/basics node js/6_fetch.js"
  const app=http.createServer((req,res) =>{
    const parsedPath=path.parse(myPath)
     res.end('Hello from Node.js server!');  //res.end is used to print the res.end 
  })
  app.listen(3000, ()=>{
    console.log('http://localhost:3000')
  })
  
 