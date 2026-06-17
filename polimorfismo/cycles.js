class Cycle {
    #id
    #etr

    constructor(id, etr) {
        this.#id = id
        this.#etr = etr
    }

    pause() {
        console.log("Cycle paused!")
    }

}

class SpecialCycle extends Cycle {
    constructor(id, etr) {
        super(id, etr);
    }

    pause() {
        console.log("Special Cycle paused!")
    }
}

class FavoriteCycle extends Cycle {
    constructor(id, etr) {
        super(id, etr);
    }

}

const specialCycle = new SpecialCycle(1, 10)
specialCycle.pause()
const favoriteCycle = new FavoriteCycle(2, 22)
favoriteCycle.pause()
