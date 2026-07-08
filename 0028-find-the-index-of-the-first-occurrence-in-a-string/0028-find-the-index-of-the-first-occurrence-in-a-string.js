var strStr = function (haystack, needle) {
    let i = 0;

    while (i <= haystack.length - needle.length) {

        let j = 0;

        while (j < needle.length && haystack[i + j] === needle[j]) {
            j++;
        }

        if (j === needle.length) {
            return i;
        }

        i++;
    }

    return -1;
};