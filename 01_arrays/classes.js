// reference type
var object1 = { value: 10}
var object2 = object1
var object1 = { value: 10 }


// context vs scope
console.log(this)

/*
 * "this" refers to the object we're currently inside of
 */

// instantiation
class Player {
    constructor(name, type) {
        this.name = name
        this.type = type
    }

    introduce() {
        console.log(`Hi, I'm ${this.name}. I'm a ${this.type}`)
    }
}

class Wizard extends Player {
    constructor(name) {
        super(name, "Wizard")
    }

    castSpell() {
        console.log('WOOOOSH')
    }
}

const wiz1 = new Wizard("Shelly")

wiz1.introduce()