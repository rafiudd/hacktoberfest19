function selectionSort(aInput){
    for(var wall = 0; wall < aInput.length - 1; wall++){
        //mencari angka terkecil
        var indexOfSmallest = wall;
        for(var j = wall + 1; j < aInput.length; j++){
            //membandingkan nilai array
            if(aInput[indexOfSmallest] > aInput[j]){
                indexOfSmallest = j;
            }
        }
        //menukar
        var temp = aInput[wall];
        aInput[wall] = aInput[indexOfSmallest];
        aInput[indexOfSmallest] = temp;
    }
}
var aInput = [130,10,18,23,21,9,28,91,36,1]
console.log(aInput);
selectionSort(aInput);
console.log(aInput);