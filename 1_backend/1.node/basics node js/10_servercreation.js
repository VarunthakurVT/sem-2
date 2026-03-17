const http=require("http") //it is used to install http module
const server=http.createServer((req,res)=>{
    if(req.url==="/"&&req.method=="Get"){
        res.writeHead(200,{'content-type':Text/plain});
    res.end("welcome to node server");
}else{
    res.writeHead(404);
    res.end("not found");
}
});
server.listen(3000,()=>{
    console.log("server is running at http://Localhost:3000");

})