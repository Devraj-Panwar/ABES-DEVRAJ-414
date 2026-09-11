let arr = process.argv.slice(2).map(Number);
for(let i = 0 ; i<arr.length ; i++){
    console.log(arr[i]);
}
if (arr.length === 0) {
    console.log("No numbers provided. Please pass at least one number as an argument.");
} else if (arr.length === 1) {
    console.log("Only one number provided. The sum of the first and last element is: " + arr[0]);
} else {
    console.log("the sum of the last and the first element is : ");
    let sum=arr[0] + arr[arr.length-1];  // or use arr[0] + arr.at(-1)  or arr.at(0)+arr.at(-1)
    console.log(sum);
}