const http = require("http");

// res.write() → many times (allowed)
// res.end()  → only ONE time (must call it to finish the response)

http.createServer((req, res) => {
    if (req.url === "/") {
        res.write(" I am on home page :1");
        res.write("i am on home page :02");
        res.end();                    // ←←← THIS WAS MISSING (browser was hanging)

    } else if (req.url === "/about") {
        res.end("i am on about page");

    } else {
        console.log("404 page not found");
        res.end("404 server not found");
    }
}).listen(300, () => {
    console.log("server has started on http://localhost:3000");
});