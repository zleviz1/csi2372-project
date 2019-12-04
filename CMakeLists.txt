cmake_minimum_required(VERSION 3.6)
project(projected)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp card.cpp Chain.cpp player.cpp TradeArea.cpp TradeArea.h player.h table.cpp table.h hand.cpp hand.h gamestone.cpp gamestone.h cardfactory.cpp cardfactory.h chain.h deck.cpp deck.h DiscardPile.cpp DiscardPile.h card.h)
add_executable(projected ${SOURCE_FILES})