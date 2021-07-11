#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

string adjectives[] = {
    "Adorable",
    "Adventurous",
    "Aggressive",
    "Alert",
    "Attractive",
    "Average",
    "Beautiful",
    "Blue-eyed",
    "Bloody",
    "Blushing",
    "Bright",
    "Clean",
    "Clear",
    "Cloudy",
    "Colorful",
    "Crowded",
    "Cute",
    "Dark",
    "Drab",
    "Distinct",
    "Dull",
    "Elegant",
    "Excited",
    "Fancy",
    "Filthy",
    "Glamorous",
    "Gleaming",
    "Gorgeous",
    "Graceful",
    "Grotesque",
    "Handsome",
    "Homely",
    "Light",
    "Long",
    "Magnificent",
    "Misty",
    "Motionless",
    "Muddy",
    "Old-fashioned",
    "Plain",
    "Poised",
    "Precious",
    "Quaint",
    "Shiny",
    "Smoggy",
    "Sparkling",
    "Spotless",
    "Stormy",
    "Strange",
    "Ugly",
    "Ugliest",
    "Unsightly",
    "Unusual",
    "Wide-eyed",
    "Alive",
    "Annoying",
    "Bad",
    "Better",
    "Beautiful",
    "Brainy",
    "Breakable",
    "Busy",
    "Careful",
    "Cautious",
    "Clever",
    "Clumsy",
    "Concerned",
    "Crazy",
    "Curious",
    "Dead",
    "Different",
    "Difficult",
    "Doubtful",
    "Easy",
    "Expensive",
    "Famous",
    "Fragile",
    "Frail",
    "Gifted",
    "Helpful",
    "Helpless",
    "Horrible",
    "Important",
    "Impossible",
    "Inexpensive",
    "Innocent",
    "Inquisitive",
    "Modern",
    "Mushy",
    "Odd",
    "Open",
    "Outstanding",
    "Poor",
    "Powerful",
    "Prickly",
    "Puzzled",
    "Real",
    "Rich",
    "Shy",
    "Sleepy",
    "Smelly",
    "Stinky",
    "Stupid",
    "Super",
    "Talented",
    "Tame",
    "Tenacious",
    "Tender",
    "Tough",
    "Uninterested",
    "Vast",
    "Wandering",
    "Wild",
    "Wrong",
    "Agreeable",
    "Amused",
    "Brave",
    "Calm",
    "Charming",
    "Cheerful",
    "Comfortable",
    "Cooperative",
    "Courageous",
    "Delightful",
    "Determined",
    "Eager",
    "Elated",
    "Enchanting",
    "Encouraging",
    "Energetic",
    "Enthusiastic",
    "Excited",
    "Exuberant",
    "Fair",
    "Faithful",
    "Fantastic",
    "Fine",
    "Friendly",
    "Funny",
    "Gentle",
    "Glorious",
    "Good",
    "Happy",
    "Healthy",
    "Helpful",
    "Hilarious",
    "Jolly",
    "Joyous",
    "Kind",
    "Lively",
    "Lovely",
    "Lucky",
    "Nice",
    "Obedient",
    "Perfect",
    "Pleasant",
    "Proud",
    "Relieved",
    "Sassy",
    "Silly",
    "Smiling",
    "Splendid",
    "Successful",
    "Thankful",
    "Thoughtful",
    "Victorious",
    "Vivacious",
    "Witty",
    "Wonderful",
    "Zealous",
    "Zany"
};
  
string animals[] {
  "Aardvark",
  "Albatross",
  "Alligator",
  "Alpaca",
  "Ant",
  "Anteater",
  "Antelope",
  "Ape",
  "Armadillo",
  "Herd",
  "Baboon",
  "Badger",
  "Barracuda",
  "Bat",
  "Bear",
  "Beaver",
  "Bee",
  "Bison",
  "Boar",
  "Galago",
  "Butterfly",
  "Camel",
  "Caribou",
  "Cat",
  "Caterpillar",
  "Cattle",
  "Chamois",
  "Cheetah",
  "Chicken",
  "Chimpanzee",
  "Chinchilla",
  "Chough",
  "Clam",
  "Cobra",
  "Cockroach",
  "Cod",
  "Cormorant",
  "Coyote",
  "Crab",
  "Herd",
  "Crocodile",
  "Crow",
  "Curlew",
  "Deer",
  "Dinosaur",
  "Dog",
  "Dolphin",
  "Donkey",
  "Dotterel",
  "Dove",
  "Dragonfly",
  "Duck",
  "Dugong",
  "Dunlin",
  "Eagle",
  "Echidna",
  "Eel",
  "Elephant",
  "Elk",
  "Emu",
  "Falcon",
  "Ferret",
  "Finch",
  "Fish",
  "Flamingo",
  "Fly",
  "Fox",
  "Frog",
  "Gaur",
  "Gazelle",
  "Gerbil",
  "Giraffe",
  "Gnat",
  "Goat",
  "Goose",
  "Goldfish",
  "Gorilla",
  "Goshawk",
  "Grasshopper",
  "Grouse",
  "Guanaco",
  "Poultry",
  "Herd",
  "Gull",
  "Hamster",
  "Hare",
  "Hawk",
  "Hedgehog",
  "Heron",
  "Herring",
  "Hippopotamus",
  "Hornet",
  "Horse",
  "Human",
  "Hummingbird",
  "Hyena",
  "Jackal",
  "Jaguar",
  "Jay",
  "Jellyfish",
  "Kangaroo",
  "Koala",
  "Kouprey",
  "Kudu",
  "Lapwing",
  "Lark",
  "Lemur",
  "Leopard",
  "Lion",
  "Llama",
  "Lobster",
  "Locust",
  "Loris",
  "Louse",
  "Lyrebird",
  "Magpie",
  "Mallard",
  "Manatee",
  "Marten",
  "Meerkat",
  "Mink",
  "Monkey",
  "Moose",
  "Mouse",
  "Mosquito",
  "Mule",
  "Narwhal",
  "Newt",
  "Nightingale",
  "Octopus",
  "Okapi",
  "Opossum",
  "Oryx",
  "Ostrich",
  "Otter",
  "Owl",
  "Ox",
  "Oyster",
  "Parrot",
  "Partridge",
  "Peafowl",
  "Pelican",
  "Penguin",
  "Pheasant",
  "Pig",
  "Pigeon",
  "Pony",
  "Porcupine",
  "Porpoise",
  "Quail",
  "Quelea",
  "Rabbit",
  "Raccoon",
  "Rat",
  "Raven",
  "Herd",
  "Reindeer",
  "Rhinoceros",
  "Ruff",
  "Salamander",
  "Salmon",
  "Sandpiper",
  "Sardine",
  "Scorpion",
  "Herd",
  "Seahorse",
  "Shark",
  "Sheep",
  "Shrew",
  "Shrimp",
  "Skunk",
  "Snail",
  "Snake",
  "Spider",
  "Squid",
  "Squirrel",
  "Starling",
  "Stingray",
  "Stinkbug",
  "Stork",
  "Swallow",
  "Swan",
  "Tapir",
  "Tarsier",
  "Termite",
  "Tiger",
  "Toad",
  "Trout",
  "Poultry",
  "Turtle",
  "Vulture",
  "Wallaby",
  "Walrus",
  "Wasp",
  "Carabeef",
  "Weasel",
  "Whale",
  "Wolf",
  "Wolverine",
  "Wombat",
  "Woodcock",
  "Woodpecker",
  "Worm",
  "Wren",
  "Yak",
  "Zebra"
};
