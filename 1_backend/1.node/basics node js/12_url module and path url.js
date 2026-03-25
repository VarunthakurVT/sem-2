//https://www.youtube.com/watch?video=abc&code=xyz 
//http --protocol
//www.youtube.com --hostname or domain 
// /watch --pathname
// video==abc & code =xyz -- query/searchParamsconst http=require("http") //it is used to install http module
const http=require("http")
const path=require("path")
const indexLocation="1.node\basics node js\index.js"
const app=http.createServer((req,res)=>{
 const myPath=path.parse(indexLocation)
 console.log(myPath)
})
   
app.listen(3000,()=>{
    console.log("server is running at http://Localhost:3000");

})