class Cycle {
    #id
    #etr

    constructor(id, etr) {
        this.#id = id
        this.#etr = etr
    }

    countEtr() {
        this.#etr--;
    }
}

const cycle = new Cycle(1, 10)
const cycle2 = new Cycle(2, 20)
const cycle3 = new Cycle(3, 450)
console.log(cycle.id);
console.log(cycle.etr);
cycle.countEtr()
