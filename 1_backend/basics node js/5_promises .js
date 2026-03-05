let random = Math.ceil(Math.random() * 10);  // Fixed: ceil() and proper assignment

const promise = new Promise((resolve, reject) => {  // Fixed: arrow function with parentheses
    if (random % 2 == 0) {
        resolve("Even number!");  // Fixed: resolve() as function call
    } else {
        reject("Odd number!");    // Fixed: reject() as function call
    }
});

promise
    .then(result => console.log(result))
    .catch(error => console.error(error));


  