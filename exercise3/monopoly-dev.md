# Monopoly Dev Notes


## User Stories
* As a player, I can roll the dice to determine the number of steps I can move on the game board.
* As a player, I can purchase properties when I land on an unowned property and have enough money.
* As a player, I can pay rent to other players when I land on their owned properties.
* As a player, I can build houses and hotels on my owned properties to increase the rent.

## Acceptance Tests
Scenario: As a player, I can roll the dice to determine the number of steps I can move on the game board.\
Given: The game is set up with players and a game board.\
When: I click on the "Roll Dice" button.\
Then: The dice are rolled, and my game piece moves the number of steps indicated by the dice roll.

Scenario: As a player, I can purchase properties when I land on an unowned property and have enough money.\
Given: I have landed on an unowned property and have enough money to purchase it.\
When: I click on the "Buy Property" button.\
Then: I become the owner of the property, and the purchase price is deducted from my account balance.

Scenario: As a player, I can pay rent to other players when I land on their owned properties.\
Given: I have landed on a property owned by another player.\
When: I end my turn or click on the "Pay Rent" button.\
Then: The rent amount is deducted from my account balance and added to the owner's account balance.

Scenario: As a player, I can build houses and hotels on my owned properties to increase the rent.\
Given: I own a complete color group of properties and have enough money to build houses or hotels.\
When: I click on the "Build" button and select the desired property to build on.\
Then: The property is upgraded with a house or hotel, and the rent amount for that property increases.