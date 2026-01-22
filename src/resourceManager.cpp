// Ad Maiorem Dei Gloriam! ✝

#include "resourceManager.hpp"

sf::Sprite* ResourceManager::getTexture(const std::string& texturePath) {
    auto itFind = mSprites.find(texturePath);
    bool find = itFind != mSprites.end();
    if (find) {
        return &(itFind->second);
    } else {
        mTextures.emplace(texturePath, sf::Texture());
        mTextures[texturePath].loadFromFile(texturePath);
        mSprites.emplace(texturePath, sf::Sprite(mTextures[texturePath]));
        return &(mSprites[texturePath]);
    }
}    