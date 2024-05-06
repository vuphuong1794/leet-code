function filter(arr: number[], fn: (n: number, i: number) => any): number[] {
    const new_arr: number[] = [];
    for(let i = 0; i< arr.length; i++){
        if(fn(arr[i], i)){
            new_arr.push(arr[i]);
        }
    }
    return new_arr;
}