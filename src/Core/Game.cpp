//
// Created by alwin on 11/14/22.
//
#include "Game.hpp"
#include "SFML/Window/Event.hpp"

namespace Core {
    Game::Game(sf::RenderWindow *window) {
        this->window = window;
        this->objects = std::vector<Object*>();
    }

    void Game::run() const {
        while(window->isOpen()) {
            sf::Event event;

            while(window->pollEvent(event)) {
                if (event.type == sf::Event::Closed) window->close();

            }

            window->clear();
            render();
            window->display();
        }
    }

    void Game::render() const {

    }

    void Game::add(Object *object) {
        objects.push_back(object);
    }
}