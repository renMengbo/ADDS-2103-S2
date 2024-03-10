#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual ~Move() {}
    virtual std::string getName()  = 0;
};

class Rock : public Move {
public:
    std::string getName()  override { return "Rock"; }
};

class Paper : public Move {
public:
    std::string getName()  override { return "Paper"; }
};

class Scissors : public Move {
public:
    std::string getName()  override { return "Scissors"; }
};

class Robot : public Move {
public:
    std::string getName()  override { return "Robot"; }
};

class Monkey : public Move {
public:
    std::string getName()  override { return "Monkey"; }
};

class Pirate : public Move {
public:
    std::string getName()  override { return "Pirate"; }
};

class Ninja : public Move {
public:
    std::string getName()  override { return "Ninja"; }
};

class Zombie : public Move {
public:
    std::string getName()  override { return "Zombie"; }
};

#endif // MOVE_H
