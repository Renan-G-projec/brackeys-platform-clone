// Ad Maiorem Dei Gloriam! ✝
#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

#include "unordered_map"

#include "SFML/Graphics/Sprite.hpp"
#include "SFML/Graphics/Texture.hpp"

class ResourceManager {
public:
    sf::Sprite* getTexture(const std::string& texturePath);

private:
    std::unordered_map<const std::string&, sf::Texture> mTextures;
    std::unordered_map<const std::string&, sf::Sprite> mSprites;
};

#endif