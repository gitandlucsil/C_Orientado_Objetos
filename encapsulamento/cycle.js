class Cycle {
    #id
    #etr

    constructor(id, etr) {
        this.#id = id
        this.#etr = etr
    }

    get id() {
        return this.#id
    }

    get etr() {
        return this.#etr
    }

}

const cycle = new Cycle(1, 10)
console.log(cycle.id);
console.log(cycle.etr);
