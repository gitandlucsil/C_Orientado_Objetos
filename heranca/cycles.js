class Cycle {
    #id
    #etr

    constructor(id, etr) {
        this.#id = id
        this.#etr = etr
        console.log("Cycle created!")
    }

    get id() {
        return this.#id
    }

    get etr() {
        return this.#etr
    }

}

class SpecialCycle extends Cycle {
    constructor(id, etr) {
        super(id, etr);
        console.log("SpecialCycle created!")
    }
}

class FavoriteCycle extends Cycle {
    constructor(id, etr) {
        super(id, etr);
        console.log("FavoriteCycle created!")
    }
}

const specialCycle = new SpecialCycle(1, 10)
console.log("specialCycle id: "+specialCycle.id+ ", specialCycle etr: "+specialCycle.etr)
const favoriteCycle = new FavoriteCycle(2, 22)
console.log("favoriteCycle id: "+favoriteCycle.id+ ", favoriteCycle etr: "+favoriteCycle.etr);
