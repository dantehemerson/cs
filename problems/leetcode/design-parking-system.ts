class ParkingSystem {
    private readonly spaces: Map<number, number>
    constructor(private big: number, private medium: number, private small: number) {
        this.spaces = new Map()
        
        this.spaces.set(1, big)
        this.spaces.set(2, medium)
        this.spaces.set(3, small)
    }

    addCar(carType: number): boolean {
        const availableSpaces = this.spaces.get(carType)
        if(availableSpaces > 0) {
            this.spaces.set(carType, availableSpaces - 1)
            return true
        } 
        return false 

    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * var obj = new ParkingSystem(big, medium, small)
 * var param_1 = obj.addCar(carType)
 */
