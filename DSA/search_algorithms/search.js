function linearSearch( arr, n, target ) {
    for ( i = 0; i < n; i++ ) {
        if ( arr[ i ] == target ) {
            return i;
        }
    }
    return -1;
}

function binarySearch( arr, n, target ) {
    let left = 0;
    let right = n - 1;
    while ( left <= right ) {
        let mid = Math.floor( left + ( right - left ) / 2 );
        if ( arr[ mid ] == target ) {
            return mid;
        }
        else if ( arr[ mid ] < target ) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;

}

arr = [ 1, 2, 3, 4, 5, 6, 7, 8 ];
n = 8;
target = 5;
console.log( linearSearch( arr, n, target ) );
console.log( binarySearch( arr, n, target ) );