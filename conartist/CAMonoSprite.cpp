#include "CAMonoSprite.h"

#include "utfcpp/source/utf8.h"

ConArtist::CAMonoSprite::CAMonoSprite(std::string text, ConArtist::CAColor color) : color{ color } {
	this->text = utf8::utf8to32(text);
}

ConArtist::CAMonoSprite::CAMonoSprite(std::u32string text, ConArtist::CAColor color) : color{ color }, text{ text } {
}
