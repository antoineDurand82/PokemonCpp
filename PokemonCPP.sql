CREATE TABLE `pokemon` (
  `id` int AUTO_INCREMENT,
  `pokemonName` varchar(255),
  `name` varchar(255),
  `hp` int,
  `tms` [TM],
  `useTM` method
);

CREATE TABLE `trainer` (
  `id` int AUTO_INCREMENT,
  `name` varchar(255),
  `teams` [pokemon],
  `pc` [pokemon],
  `money` int,
  `inventory` [item],
  `searchWildPokemon` method,
  `runAway` method,
  `useItem` method,
  `changePokemon` method,
  `chooseAttack` method,
  `goToPokemonCenter` method,
  `goToShop` method,
  `goToGym` method
);

CREATE TABLE `item` (
  `id` int AUTO_INCREMENT,
  `name` varchar(255),
  `price` int
);

CREATE TABLE `healing` (
  `hpHeal` int
);

CREATE TABLE `ball` (
  `catchRate` int
);

CREATE TABLE `Building` (
  `name` varchar(255)
);

CREATE TABLE `Shop` (
  `stock` [Item],
  `achat` method,
  `revente` method
);

CREATE TABLE `pokemonCenter` (
  `healPokemon` method,
  `goToPc` method
);

CREATE TABLE `Gym` (
  `listTrainer` trainer[],
  `goPokemonCenter` method,
  `nextTrainer` method
);

CREATE TABLE `Type` (
  `name` varchar(255),
  `weakAgainst` [Type],
  `strongAgainst` [Type],
  `notEffectiveAgainst` [Type],
  `weakTo` [Type],
  `strongTo` [Type],
  `notEffectiveTo` [Type]
);

CREATE TABLE `TM` (
  `name` varchar(255),
  `type` type,
  `power` int,
  `accuracy` int,
  `PP` int
);

CREATE TABLE `EnumLocation` (
  `name` string,
  `listLocation` method
);
