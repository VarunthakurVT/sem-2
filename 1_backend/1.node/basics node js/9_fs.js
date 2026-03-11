// learn fs fs module 
const http=require("http")
const fs =require("fs")
const app=http.createServer((req,res)=>{
    console.log(fs);
//   fs.writeFileSync("myFile.txt","this is added using write file sync")

//writing in a file -Async
// fs.writeFile("myFile.txt","added 

//reading a file
// let readData=fs.readFilesSync("myFile.txt","utf-8")
// console.log(readData)

//appending in a file -sync 
// fs.appendFileSync("myFile.txt","Appending file using sync")
// })

//appended using a sync 

app.listen(3000,()=>{
    console.log("Server started..")
})