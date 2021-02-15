CREATE TABLE `pokemon` (
  `id` int,
  `pokemonName` varchar(255),
  `name` varchar(255),
  `type` PokemonType,
  `currentHP` int,
  `maxHP` int,
  `moves` vectorMove,
  `useTM` method
);

CREATE TABLE `trainer` (
  `id` int,
  `name` varchar(255),
  `teams` vectorPokemon,
  `pc` vectorPokemon,
  `money` int,
  `inventory` vectorItem,
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
  `id` int,
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
  `stock` vectorItem,
  `achat` method,
  `revente` method
);

CREATE TABLE `pokemonCenter` (
  `healPokemon` method,
  `goToPc` method
);

CREATE TABLE `Gym` (
  `listTrainer` vectorTrainer,
  `goPokemonCenter` method,
  `nextTrainer` method
);

CREATE TABLE `PokemonType` (
  `name` varchar(255),
  `weakAgainst` vectorPokemonType,
  `strongAgainst` vectorPokemonType,
  `notEffectiveAgainst` vectorPokemonType,
  `weakTo` vectorPokemonType,
  `resistTo` vectorPokemonType,
  `immuneTo` vectorPokemonType
);

CREATE TABLE `Move` (
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
