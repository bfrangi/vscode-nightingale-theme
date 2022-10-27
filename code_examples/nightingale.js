ACTIVE_TIME = 'Night (10 p.m. to 7 a.m.)'

class Nightingale {
    constructor () {
        this.name = 'Common Nightingale'
        this.scientific_name = 'Luscinia megarhynchos'
        this.population_status = 'stable'
        this.average_mass = 20//g
        this.active_time = ACTIVE_TIME
        }

    toString() {
        return this.name
    }

    sing() {
        for (let i = 0; i < 10; i++) {
            console.log('Coding...')
        }
    }
  }

let habitat = {
    some_key: 'value',
    some_other_key: 'other_value',
}