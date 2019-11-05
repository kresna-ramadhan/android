// Pernyataan
var A = [1,2,5,8,9,10];
var B = [4,2,8,10,11,12];
var C = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];

console.log("Himpunan :");
console.log("");
console.log("A : [1,2,5,8,9,10]");
console.log("B : [4,2,8,10,11,12]");
console.log("C : [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]");
console.log("");

//Hasil Irisan A dan B
console.log("Jadi Irisan A dengan B adalah = ");
console.log("=========================");
for(var i = 0;i < A.length;i++){
    for(var j = 0;j < B.length;j++){
        if(A[i] == B[j]){
            console.log(A[i]);
        }
    }
}
console.log("=========================");

// Hasil Irisan B dan C
console.log("");
console.log("Jadi Irisan B dengan C adalah = ");
console.log("=========================");
for(var r = 0;r < B.length;r++){
    for(var s = 0;s < C.length;s++){
        if(B[r] == C[s]){
            console.log(B[r]);
        }
    }
}
console.log("=========================");

// Hasil Irisan C dan A
console.log("");
console.log("Jadi Irisan C dengan A adalah = ");
console.log("=========================");
for(var e = 0;e < C.length;e++){
    for(var g = 0;g < A.length;g++){
        if(C[e] == A[g]){
            console.log(C[e]);
        }
    }
}
console.log("=========================");

// Hasil Kardinal A + C
console.log("");
var karda = A.length;
var kardc = C.length;

console.log("Kardinal A ditambah dengan Kardinal C hasilnya adalah "+(karda+kardc));
console.log("=======================================");