function decode(encoded: number[], first: number): number[] {
    return encoded.reduce((original, current, i) => {
        return original.concat(original[i] ^ current)
    }, [first])
};
