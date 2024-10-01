#!/opt/homebrew/bin/node
console.log("Hello, world, how is it going?");

console.log("One line \nA new line starts here");

console.log("\t starting this line with a tab");

console.log("");

let firstName = "Andre";
let lastName = "Dada";

console.log(firstName + " " + lastName);
console.log(`${firstName} ${lastName}`);

let city = "Wakefield";
let county = "Yorkshire";

console.log(`${city}, ${county}`);
console.log(`${city}, \t ${county}`);

let password = "foo";
if (password.length < 6) {
    console.log("Password is too short");
}

let a = 0;
if (!(a === "0")) {
    console.log(true);
} else{
    console.log(false);
}

let b = "";
if (b.length !== 0) {
    console.log(true);
} else {
    console.log(false);
}

let x = "foo";
let y = "";

if (!!x && !!y) {
    console.log("both strings are empty");
} else {
    console.log("At least one string is not empty");
}

if (!!y || !!x) {
    console.log("At least one string is not empty");
} else {
    console.log("both strings are empty");
}

console.log(!x);
console.log(x);
console.log(!!x);

let upperMoon = "HANTENGU";
let lowerMoon = "Daki";

let email = "@gmail.com";
console.log(`${upperMoon.toLowerCase()}`);
console.log(`${lowerMoon.toUpperCase()}`);
console.log(`${lowerMoon.toLowerCase()}` + email);

console.log("Hamlet.............");
let soliloquy = "To be, or not to be, that is the question";
//let toBe = "TO BE".toLowerCase

console.log(soliloquy.includes("To be"));
console.log(soliloquy.includes("question"));
console.log(soliloquy.includes("nonexistent"));
console.log(soliloquy.includes("To be", 0));
console.log(soliloquy.includes("TO BE"));
console.log(soliloquy.includes("OR NOT".toLowerCase()));

console.log(soliloquy.charAt(0));
console.log(soliloquy.charAt(1));
console.log(soliloquy.charAt(2));
console.log(soliloquy.charAt(3));
console.log(soliloquy.charAt(4));
console.log(soliloquy.charAt(5));

console.log(soliloquy.length);

for (let i = 0; i < soliloquy.length; i++) {
    console.log(soliloquy.charAt(i));
}

let N = soliloquy.length;

for (i = 0; i < N; i++) {
    console.log(soliloquy[i]);
}