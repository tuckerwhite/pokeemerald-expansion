const u8 *const gMonFootprintTable[] =
{
    [SPECIES_NONE] = gMonFootprint_Bulbasaur,
    [SPECIES_BULBASAUR] = gMonFootprint_Bulbasaur,
    [SPECIES_IVYSAUR] = gMonFootprint_Ivysaur,
    [SPECIES_VENUSAUR] = gMonFootprint_Venusaur,
    [SPECIES_CHARMANDER] = gMonFootprint_Charmander,
    [SPECIES_CHARMELEON] = gMonFootprint_Charmeleon,
    [SPECIES_CHARIZARD] = gMonFootprint_Charizard,
    [SPECIES_SQUIRTLE] = gMonFootprint_Squirtle,
    [SPECIES_WARTORTLE] = gMonFootprint_Wartortle,
    [SPECIES_BLASTOISE] = gMonFootprint_Blastoise,
    [SPECIES_CATERPIE] = gMonFootprint_Caterpie,
    [SPECIES_METAPOD] = gMonFootprint_Metapod,
    [SPECIES_BUTTERFREE] = gMonFootprint_Butterfree,
    [SPECIES_WEEDLE] = gMonFootprint_Weedle,
    [SPECIES_KAKUNA] = gMonFootprint_Kakuna,
    [SPECIES_BEEDRILL] = gMonFootprint_Beedrill,
    [SPECIES_PIDGEY] = gMonFootprint_Pidgey,
    [SPECIES_PIDGEOTTO] = gMonFootprint_Pidgeotto,
    [SPECIES_PIDGEOT] = gMonFootprint_Pidgeot,
    [SPECIES_RATTATA] = gMonFootprint_Rattata,
    [SPECIES_RATICATE] = gMonFootprint_Raticate,
    [SPECIES_SPEAROW] = gMonFootprint_Spearow,
    [SPECIES_FEAROW] = gMonFootprint_Fearow,
    [SPECIES_EKANS] = gMonFootprint_Ekans,
    [SPECIES_ARBOK] = gMonFootprint_Arbok,
    [SPECIES_PIKACHU] = gMonFootprint_Pikachu,
    [SPECIES_RAICHU] = gMonFootprint_Raichu,
    [SPECIES_SANDSHREW] = gMonFootprint_Sandshrew,
    [SPECIES_SANDSLASH] = gMonFootprint_Sandslash,
    [SPECIES_NIDORAN_F] = gMonFootprint_NidoranF,
    [SPECIES_NIDORINA] = gMonFootprint_Nidorina,
    [SPECIES_NIDOQUEEN] = gMonFootprint_Nidoqueen,
    [SPECIES_NIDORAN_M] = gMonFootprint_NidoranM,
    [SPECIES_NIDORINO] = gMonFootprint_Nidorino,
    [SPECIES_NIDOKING] = gMonFootprint_Nidoking,
    [SPECIES_CLEFAIRY] = gMonFootprint_Clefairy,
    [SPECIES_CLEFABLE] = gMonFootprint_Clefable,
    [SPECIES_VULPIX] = gMonFootprint_Vulpix,
    [SPECIES_NINETALES] = gMonFootprint_Ninetales,
    [SPECIES_JIGGLYPUFF] = gMonFootprint_Jigglypuff,
    [SPECIES_WIGGLYTUFF] = gMonFootprint_Wigglytuff,
    [SPECIES_ZUBAT] = gMonFootprint_Zubat,
    [SPECIES_GOLBAT] = gMonFootprint_Golbat,
    [SPECIES_ODDISH] = gMonFootprint_Oddish,
    [SPECIES_GLOOM] = gMonFootprint_Gloom,
    [SPECIES_VILEPLUME] = gMonFootprint_Vileplume,
    [SPECIES_PARAS] = gMonFootprint_Paras,
    [SPECIES_PARASECT] = gMonFootprint_Parasect,
    [SPECIES_VENONAT] = gMonFootprint_Venonat,
    [SPECIES_VENOMOTH] = gMonFootprint_Venomoth,
    [SPECIES_DIGLETT] = gMonFootprint_Diglett,
    [SPECIES_DUGTRIO] = gMonFootprint_Dugtrio,
    [SPECIES_MEOWTH] = gMonFootprint_Meowth,
    [SPECIES_PERSIAN] = gMonFootprint_Persian,
    [SPECIES_PSYDUCK] = gMonFootprint_Psyduck,
    [SPECIES_GOLDUCK] = gMonFootprint_Golduck,
    [SPECIES_MANKEY] = gMonFootprint_Mankey,
    [SPECIES_PRIMEAPE] = gMonFootprint_Primeape,
    [SPECIES_GROWLITHE] = gMonFootprint_Growlithe,
    [SPECIES_ARCANINE] = gMonFootprint_Arcanine,
    [SPECIES_POLIWAG] = gMonFootprint_Poliwag,
    [SPECIES_POLIWHIRL] = gMonFootprint_Poliwhirl,
    [SPECIES_POLIWRATH] = gMonFootprint_Poliwrath,
    [SPECIES_ABRA] = gMonFootprint_Abra,
    [SPECIES_KADABRA] = gMonFootprint_Kadabra,
    [SPECIES_ALAKAZAM] = gMonFootprint_Alakazam,
    [SPECIES_MACHOP] = gMonFootprint_Machop,
    [SPECIES_MACHOKE] = gMonFootprint_Machoke,
    [SPECIES_MACHAMP] = gMonFootprint_Machamp,
    [SPECIES_BELLSPROUT] = gMonFootprint_Bellsprout,
    [SPECIES_WEEPINBELL] = gMonFootprint_Weepinbell,
    [SPECIES_VICTREEBEL] = gMonFootprint_Victreebel,
    [SPECIES_TENTACOOL] = gMonFootprint_Tentacool,
    [SPECIES_TENTACRUEL] = gMonFootprint_Tentacruel,
    [SPECIES_GEODUDE] = gMonFootprint_Geodude,
    [SPECIES_GRAVELER] = gMonFootprint_Graveler,
    [SPECIES_GOLEM] = gMonFootprint_Golem,
    [SPECIES_PONYTA] = gMonFootprint_Ponyta,
    [SPECIES_RAPIDASH] = gMonFootprint_Rapidash,
    [SPECIES_SLOWPOKE] = gMonFootprint_Slowpoke,
    [SPECIES_SLOWBRO] = gMonFootprint_Slowbro,
    [SPECIES_MAGNEMITE] = gMonFootprint_Magnemite,
    [SPECIES_MAGNETON] = gMonFootprint_Magneton,
    [SPECIES_FARFETCHD] = gMonFootprint_Farfetchd,
    [SPECIES_DODUO] = gMonFootprint_Doduo,
    [SPECIES_DODRIO] = gMonFootprint_Dodrio,
    [SPECIES_SEEL] = gMonFootprint_Seel,
    [SPECIES_DEWGONG] = gMonFootprint_Dewgong,
    [SPECIES_GRIMER] = gMonFootprint_Grimer,
    [SPECIES_MUK] = gMonFootprint_Muk,
    [SPECIES_SHELLDER] = gMonFootprint_Shellder,
    [SPECIES_CLOYSTER] = gMonFootprint_Cloyster,
    [SPECIES_GASTLY] = gMonFootprint_Gastly,
    [SPECIES_HAUNTER] = gMonFootprint_Haunter,
    [SPECIES_GENGAR] = gMonFootprint_Gengar,
    [SPECIES_ONIX] = gMonFootprint_Onix,
    [SPECIES_DROWZEE] = gMonFootprint_Drowzee,
    [SPECIES_HYPNO] = gMonFootprint_Hypno,
    [SPECIES_KRABBY] = gMonFootprint_Krabby,
    [SPECIES_KINGLER] = gMonFootprint_Kingler,
    [SPECIES_VOLTORB] = gMonFootprint_Voltorb,
    [SPECIES_ELECTRODE] = gMonFootprint_Electrode,
    [SPECIES_EXEGGCUTE] = gMonFootprint_Exeggcute,
    [SPECIES_EXEGGUTOR] = gMonFootprint_Exeggutor,
    [SPECIES_CUBONE] = gMonFootprint_Cubone,
    [SPECIES_MAROWAK] = gMonFootprint_Marowak,
    [SPECIES_HITMONLEE] = gMonFootprint_Hitmonlee,
    [SPECIES_HITMONCHAN] = gMonFootprint_Hitmonchan,
    [SPECIES_LICKITUNG] = gMonFootprint_Lickitung,
    [SPECIES_KOFFING] = gMonFootprint_Koffing,
    [SPECIES_WEEZING] = gMonFootprint_Weezing,
    [SPECIES_RHYHORN] = gMonFootprint_Rhyhorn,
    [SPECIES_RHYDON] = gMonFootprint_Rhydon,
    [SPECIES_CHANSEY] = gMonFootprint_Chansey,
    [SPECIES_TANGELA] = gMonFootprint_Tangela,
    [SPECIES_KANGASKHAN] = gMonFootprint_Kangaskhan,
    [SPECIES_HORSEA] = gMonFootprint_Horsea,
    [SPECIES_SEADRA] = gMonFootprint_Seadra,
    [SPECIES_GOLDEEN] = gMonFootprint_Goldeen,
    [SPECIES_SEAKING] = gMonFootprint_Seaking,
    [SPECIES_STARYU] = gMonFootprint_Staryu,
    [SPECIES_STARMIE] = gMonFootprint_Starmie,
    [SPECIES_MR_MIME] = gMonFootprint_Mrmime,
    [SPECIES_SCYTHER] = gMonFootprint_Scyther,
    [SPECIES_JYNX] = gMonFootprint_Jynx,
    [SPECIES_ELECTABUZZ] = gMonFootprint_Electabuzz,
    [SPECIES_MAGMAR] = gMonFootprint_Magmar,
    [SPECIES_PINSIR] = gMonFootprint_Pinsir,
    [SPECIES_TAUROS] = gMonFootprint_Tauros,
    [SPECIES_MAGIKARP] = gMonFootprint_Magikarp,
    [SPECIES_GYARADOS] = gMonFootprint_Gyarados,
    [SPECIES_LAPRAS] = gMonFootprint_Lapras,
    [SPECIES_DITTO] = gMonFootprint_Ditto,
    [SPECIES_EEVEE] = gMonFootprint_Eevee,
    [SPECIES_VAPOREON] = gMonFootprint_Vaporeon,
    [SPECIES_JOLTEON] = gMonFootprint_Jolteon,
    [SPECIES_FLAREON] = gMonFootprint_Flareon,
    [SPECIES_PORYGON] = gMonFootprint_Porygon,
    [SPECIES_OMANYTE] = gMonFootprint_Omanyte,
    [SPECIES_OMASTAR] = gMonFootprint_Omastar,
    [SPECIES_KABUTO] = gMonFootprint_Kabuto,
    [SPECIES_KABUTOPS] = gMonFootprint_Kabutops,
    [SPECIES_AERODACTYL] = gMonFootprint_Aerodactyl,
    [SPECIES_SNORLAX] = gMonFootprint_Snorlax,
    [SPECIES_ARTICUNO] = gMonFootprint_Articuno,
    [SPECIES_ZAPDOS] = gMonFootprint_Zapdos,
    [SPECIES_MOLTRES] = gMonFootprint_Moltres,
    [SPECIES_DRATINI] = gMonFootprint_Dratini,
    [SPECIES_DRAGONAIR] = gMonFootprint_Dragonair,
    [SPECIES_DRAGONITE] = gMonFootprint_Dragonite,
    [SPECIES_MEWTWO] = gMonFootprint_Mewtwo,
    [SPECIES_MEW] = gMonFootprint_Mew,
    [SPECIES_CHIKORITA] = gMonFootprint_Chikorita,
    [SPECIES_BAYLEEF] = gMonFootprint_Bayleef,
    [SPECIES_MEGANIUM] = gMonFootprint_Meganium,
    [SPECIES_CYNDAQUIL] = gMonFootprint_Cyndaquil,
    [SPECIES_QUILAVA] = gMonFootprint_Quilava,
    [SPECIES_TYPHLOSION] = gMonFootprint_Typhlosion,
    [SPECIES_TOTODILE] = gMonFootprint_Totodile,
    [SPECIES_CROCONAW] = gMonFootprint_Croconaw,
    [SPECIES_FERALIGATR] = gMonFootprint_Feraligatr,
    [SPECIES_SENTRET] = gMonFootprint_Sentret,
    [SPECIES_FURRET] = gMonFootprint_Furret,
    [SPECIES_HOOTHOOT] = gMonFootprint_Hoothoot,
    [SPECIES_NOCTOWL] = gMonFootprint_Noctowl,
    [SPECIES_LEDYBA] = gMonFootprint_Ledyba,
    [SPECIES_LEDIAN] = gMonFootprint_Ledian,
    [SPECIES_SPINARAK] = gMonFootprint_Spinarak,
    [SPECIES_ARIADOS] = gMonFootprint_Ariados,
    [SPECIES_CROBAT] = gMonFootprint_Crobat,
    [SPECIES_CHINCHOU] = gMonFootprint_Chinchou,
    [SPECIES_LANTURN] = gMonFootprint_Lanturn,
    [SPECIES_PICHU] = gMonFootprint_Pichu,
    [SPECIES_CLEFFA] = gMonFootprint_Cleffa,
    [SPECIES_IGGLYBUFF] = gMonFootprint_Igglybuff,
    [SPECIES_TOGEPI] = gMonFootprint_Togepi,
    [SPECIES_TOGETIC] = gMonFootprint_Togetic,
    [SPECIES_NATU] = gMonFootprint_Natu,
    [SPECIES_XATU] = gMonFootprint_Xatu,
    [SPECIES_MAREEP] = gMonFootprint_Mareep,
    [SPECIES_FLAAFFY] = gMonFootprint_Flaaffy,
    [SPECIES_AMPHAROS] = gMonFootprint_Ampharos,
    [SPECIES_BELLOSSOM] = gMonFootprint_Bellossom,
    [SPECIES_MARILL] = gMonFootprint_Marill,
    [SPECIES_AZUMARILL] = gMonFootprint_Azumarill,
    [SPECIES_SUDOWOODO] = gMonFootprint_Sudowoodo,
    [SPECIES_POLITOED] = gMonFootprint_Politoed,
    [SPECIES_HOPPIP] = gMonFootprint_Hoppip,
    [SPECIES_SKIPLOOM] = gMonFootprint_Skiploom,
    [SPECIES_JUMPLUFF] = gMonFootprint_Jumpluff,
    [SPECIES_AIPOM] = gMonFootprint_Aipom,
    [SPECIES_SUNKERN] = gMonFootprint_Sunkern,
    [SPECIES_SUNFLORA] = gMonFootprint_Sunflora,
    [SPECIES_YANMA] = gMonFootprint_Yanma,
    [SPECIES_WOOPER] = gMonFootprint_Wooper,
    [SPECIES_QUAGSIRE] = gMonFootprint_Quagsire,
    [SPECIES_ESPEON] = gMonFootprint_Espeon,
    [SPECIES_UMBREON] = gMonFootprint_Umbreon,
    [SPECIES_MURKROW] = gMonFootprint_Murkrow,
    [SPECIES_SLOWKING] = gMonFootprint_Slowking,
    [SPECIES_MISDREAVUS] = gMonFootprint_Misdreavus,
    [SPECIES_UNOWN] = gMonFootprint_Unown,
    [SPECIES_WOBBUFFET] = gMonFootprint_Wobbuffet,
    [SPECIES_GIRAFARIG] = gMonFootprint_Girafarig,
    [SPECIES_PINECO] = gMonFootprint_Pineco,
    [SPECIES_FORRETRESS] = gMonFootprint_Forretress,
    [SPECIES_DUNSPARCE] = gMonFootprint_Dunsparce,
    [SPECIES_GLIGAR] = gMonFootprint_Gligar,
    [SPECIES_STEELIX] = gMonFootprint_Steelix,
    [SPECIES_SNUBBULL] = gMonFootprint_Snubbull,
    [SPECIES_GRANBULL] = gMonFootprint_Granbull,
    [SPECIES_QWILFISH] = gMonFootprint_Qwilfish,
    [SPECIES_SCIZOR] = gMonFootprint_Scizor,
    [SPECIES_SHUCKLE] = gMonFootprint_Shuckle,
    [SPECIES_HERACROSS] = gMonFootprint_Heracross,
    [SPECIES_SNEASEL] = gMonFootprint_Sneasel,
    [SPECIES_TEDDIURSA] = gMonFootprint_Teddiursa,
    [SPECIES_URSARING] = gMonFootprint_Ursaring,
    [SPECIES_SLUGMA] = gMonFootprint_Slugma,
    [SPECIES_MAGCARGO] = gMonFootprint_Magcargo,
    [SPECIES_SWINUB] = gMonFootprint_Swinub,
    [SPECIES_PILOSWINE] = gMonFootprint_Piloswine,
    [SPECIES_CORSOLA] = gMonFootprint_Corsola,
    [SPECIES_REMORAID] = gMonFootprint_Remoraid,
    [SPECIES_OCTILLERY] = gMonFootprint_Octillery,
    [SPECIES_DELIBIRD] = gMonFootprint_Delibird,
    [SPECIES_MANTINE] = gMonFootprint_Mantine,
    [SPECIES_SKARMORY] = gMonFootprint_Skarmory,
    [SPECIES_HOUNDOUR] = gMonFootprint_Houndour,
    [SPECIES_HOUNDOOM] = gMonFootprint_Houndoom,
    [SPECIES_KINGDRA] = gMonFootprint_Kingdra,
    [SPECIES_PHANPY] = gMonFootprint_Phanpy,
    [SPECIES_DONPHAN] = gMonFootprint_Donphan,
    [SPECIES_PORYGON2] = gMonFootprint_Porygon2,
    [SPECIES_STANTLER] = gMonFootprint_Stantler,
    [SPECIES_SMEARGLE] = gMonFootprint_Smeargle,
    [SPECIES_TYROGUE] = gMonFootprint_Tyrogue,
    [SPECIES_HITMONTOP] = gMonFootprint_Hitmontop,
    [SPECIES_SMOOCHUM] = gMonFootprint_Smoochum,
    [SPECIES_ELEKID] = gMonFootprint_Elekid,
    [SPECIES_MAGBY] = gMonFootprint_Magby,
    [SPECIES_MILTANK] = gMonFootprint_Miltank,
    [SPECIES_BLISSEY] = gMonFootprint_Blissey,
    [SPECIES_RAIKOU] = gMonFootprint_Raikou,
    [SPECIES_ENTEI] = gMonFootprint_Entei,
    [SPECIES_SUICUNE] = gMonFootprint_Suicune,
    [SPECIES_LARVITAR] = gMonFootprint_Larvitar,
    [SPECIES_PUPITAR] = gMonFootprint_Pupitar,
    [SPECIES_TYRANITAR] = gMonFootprint_Tyranitar,
    [SPECIES_LUGIA] = gMonFootprint_Lugia,
    [SPECIES_HO_OH] = gMonFootprint_HoOh,
    [SPECIES_CELEBI] = gMonFootprint_Celebi,
    [SPECIES_OLD_UNOWN_B] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_C] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_D] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_E] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_F] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_G] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_H] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_I] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_J] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_K] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_L] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_M] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_N] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_O] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_P] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_Q] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_R] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_S] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_T] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_U] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_V] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_W] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_X] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_Y] = gMonFootprint_QuestionMark,
    [SPECIES_OLD_UNOWN_Z] = gMonFootprint_QuestionMark,
    [SPECIES_TREECKO] = gMonFootprint_Treecko,
    [SPECIES_GROVYLE] = gMonFootprint_Grovyle,
    [SPECIES_SCEPTILE] = gMonFootprint_Sceptile,
    [SPECIES_TORCHIC] = gMonFootprint_Torchic,
    [SPECIES_COMBUSKEN] = gMonFootprint_Combusken,
    [SPECIES_BLAZIKEN] = gMonFootprint_Blaziken,
    [SPECIES_MUDKIP] = gMonFootprint_Mudkip,
    [SPECIES_MARSHTOMP] = gMonFootprint_Marshtomp,
    [SPECIES_SWAMPERT] = gMonFootprint_Swampert,
    [SPECIES_POOCHYENA] = gMonFootprint_Poochyena,
    [SPECIES_MIGHTYENA] = gMonFootprint_Mightyena,
    [SPECIES_ZIGZAGOON] = gMonFootprint_Zigzagoon,
    [SPECIES_LINOONE] = gMonFootprint_Linoone,
    [SPECIES_WURMPLE] = gMonFootprint_Wurmple,
    [SPECIES_SILCOON] = gMonFootprint_Silcoon,
    [SPECIES_BEAUTIFLY] = gMonFootprint_Beautifly,
    [SPECIES_CASCOON] = gMonFootprint_Cascoon,
    [SPECIES_DUSTOX] = gMonFootprint_Dustox,
    [SPECIES_LOTAD] = gMonFootprint_Lotad,
    [SPECIES_LOMBRE] = gMonFootprint_Lombre,
    [SPECIES_LUDICOLO] = gMonFootprint_Ludicolo,
    [SPECIES_SEEDOT] = gMonFootprint_Seedot,
    [SPECIES_NUZLEAF] = gMonFootprint_Nuzleaf,
    [SPECIES_SHIFTRY] = gMonFootprint_Shiftry,
    [SPECIES_NINCADA] = gMonFootprint_Nincada,
    [SPECIES_NINJASK] = gMonFootprint_Ninjask,
    [SPECIES_SHEDINJA] = gMonFootprint_Shedinja,
    [SPECIES_TAILLOW] = gMonFootprint_Taillow,
    [SPECIES_SWELLOW] = gMonFootprint_Swellow,
    [SPECIES_SHROOMISH] = gMonFootprint_Shroomish,
    [SPECIES_BRELOOM] = gMonFootprint_Breloom,
    [SPECIES_SPINDA] = gMonFootprint_Spinda,
    [SPECIES_WINGULL] = gMonFootprint_Wingull,
    [SPECIES_PELIPPER] = gMonFootprint_Pelipper,
    [SPECIES_SURSKIT] = gMonFootprint_Surskit,
    [SPECIES_MASQUERAIN] = gMonFootprint_Masquerain,
    [SPECIES_WAILMER] = gMonFootprint_Wailmer,
    [SPECIES_WAILORD] = gMonFootprint_Wailord,
    [SPECIES_SKITTY] = gMonFootprint_Skitty,
    [SPECIES_DELCATTY] = gMonFootprint_Delcatty,
    [SPECIES_KECLEON] = gMonFootprint_Kecleon,
    [SPECIES_BALTOY] = gMonFootprint_Baltoy,
    [SPECIES_CLAYDOL] = gMonFootprint_Claydol,
    [SPECIES_NOSEPASS] = gMonFootprint_Nosepass,
    [SPECIES_TORKOAL] = gMonFootprint_Torkoal,
    [SPECIES_SABLEYE] = gMonFootprint_Sableye,
    [SPECIES_BARBOACH] = gMonFootprint_Barboach,
    [SPECIES_WHISCASH] = gMonFootprint_Whiscash,
    [SPECIES_LUVDISC] = gMonFootprint_Luvdisc,
    [SPECIES_CORPHISH] = gMonFootprint_Corphish,
    [SPECIES_CRAWDAUNT] = gMonFootprint_Crawdaunt,
    [SPECIES_FEEBAS] = gMonFootprint_Feebas,
    [SPECIES_MILOTIC] = gMonFootprint_Milotic,
    [SPECIES_CARVANHA] = gMonFootprint_Carvanha,
    [SPECIES_SHARPEDO] = gMonFootprint_Sharpedo,
    [SPECIES_TRAPINCH] = gMonFootprint_Trapinch,
    [SPECIES_VIBRAVA] = gMonFootprint_Vibrava,
    [SPECIES_FLYGON] = gMonFootprint_Flygon,
    [SPECIES_MAKUHITA] = gMonFootprint_Makuhita,
    [SPECIES_HARIYAMA] = gMonFootprint_Hariyama,
    [SPECIES_ELECTRIKE] = gMonFootprint_Electrike,
    [SPECIES_MANECTRIC] = gMonFootprint_Manectric,
    [SPECIES_NUMEL] = gMonFootprint_Numel,
    [SPECIES_CAMERUPT] = gMonFootprint_Camerupt,
    [SPECIES_SPHEAL] = gMonFootprint_Spheal,
    [SPECIES_SEALEO] = gMonFootprint_Sealeo,
    [SPECIES_WALREIN] = gMonFootprint_Walrein,
    [SPECIES_CACNEA] = gMonFootprint_Cacnea,
    [SPECIES_CACTURNE] = gMonFootprint_Cacturne,
    [SPECIES_SNORUNT] = gMonFootprint_Snorunt,
    [SPECIES_GLALIE] = gMonFootprint_Glalie,
    [SPECIES_LUNATONE] = gMonFootprint_Lunatone,
    [SPECIES_SOLROCK] = gMonFootprint_Solrock,
    [SPECIES_AZURILL] = gMonFootprint_Azurill,
    [SPECIES_SPOINK] = gMonFootprint_Spoink,
    [SPECIES_GRUMPIG] = gMonFootprint_Grumpig,
    [SPECIES_PLUSLE] = gMonFootprint_Plusle,
    [SPECIES_MINUN] = gMonFootprint_Minun,
    [SPECIES_MAWILE] = gMonFootprint_Mawile,
    [SPECIES_MEDITITE] = gMonFootprint_Meditite,
    [SPECIES_MEDICHAM] = gMonFootprint_Medicham,
    [SPECIES_SWABLU] = gMonFootprint_Swablu,
    [SPECIES_ALTARIA] = gMonFootprint_Altaria,
    [SPECIES_WYNAUT] = gMonFootprint_Wynaut,
    [SPECIES_DUSKULL] = gMonFootprint_Duskull,
    [SPECIES_DUSCLOPS] = gMonFootprint_Dusclops,
    [SPECIES_ROSELIA] = gMonFootprint_Roselia,
    [SPECIES_SLAKOTH] = gMonFootprint_Slakoth,
    [SPECIES_VIGOROTH] = gMonFootprint_Vigoroth,
    [SPECIES_SLAKING] = gMonFootprint_Slaking,
    [SPECIES_GULPIN] = gMonFootprint_Gulpin,
    [SPECIES_SWALOT] = gMonFootprint_Swalot,
    [SPECIES_TROPIUS] = gMonFootprint_Tropius,
    [SPECIES_WHISMUR] = gMonFootprint_Whismur,
    [SPECIES_LOUDRED] = gMonFootprint_Loudred,
    [SPECIES_EXPLOUD] = gMonFootprint_Exploud,
    [SPECIES_CLAMPERL] = gMonFootprint_Clamperl,
    [SPECIES_HUNTAIL] = gMonFootprint_Huntail,
    [SPECIES_GOREBYSS] = gMonFootprint_Gorebyss,
    [SPECIES_ABSOL] = gMonFootprint_Absol,
    [SPECIES_SHUPPET] = gMonFootprint_Shuppet,
    [SPECIES_BANETTE] = gMonFootprint_Banette,
    [SPECIES_SEVIPER] = gMonFootprint_Seviper,
    [SPECIES_ZANGOOSE] = gMonFootprint_Zangoose,
    [SPECIES_RELICANTH] = gMonFootprint_Relicanth,
    [SPECIES_ARON] = gMonFootprint_Aron,
    [SPECIES_LAIRON] = gMonFootprint_Lairon,
    [SPECIES_AGGRON] = gMonFootprint_Aggron,
    [SPECIES_CASTFORM] = gMonFootprint_Castform,
    [SPECIES_VOLBEAT] = gMonFootprint_Volbeat,
    [SPECIES_ILLUMISE] = gMonFootprint_Illumise,
    [SPECIES_LILEEP] = gMonFootprint_Lileep,
    [SPECIES_CRADILY] = gMonFootprint_Cradily,
    [SPECIES_ANORITH] = gMonFootprint_Anorith,
    [SPECIES_ARMALDO] = gMonFootprint_Armaldo,
    [SPECIES_RALTS] = gMonFootprint_Ralts,
    [SPECIES_KIRLIA] = gMonFootprint_Kirlia,
    [SPECIES_GARDEVOIR] = gMonFootprint_Gardevoir,
    [SPECIES_BAGON] = gMonFootprint_Bagon,
    [SPECIES_SHELGON] = gMonFootprint_Shelgon,
    [SPECIES_SALAMENCE] = gMonFootprint_Salamence,
    [SPECIES_BELDUM] = gMonFootprint_Beldum,
    [SPECIES_METANG] = gMonFootprint_Metang,
    [SPECIES_METAGROSS] = gMonFootprint_Metagross,
    [SPECIES_REGIROCK] = gMonFootprint_Regirock,
    [SPECIES_REGICE] = gMonFootprint_Regice,
    [SPECIES_REGISTEEL] = gMonFootprint_Registeel,
    [SPECIES_KYOGRE] = gMonFootprint_Kyogre,
    [SPECIES_GROUDON] = gMonFootprint_Groudon,
    [SPECIES_RAYQUAZA] = gMonFootprint_Rayquaza,
    [SPECIES_LATIAS] = gMonFootprint_Latias,
    [SPECIES_LATIOS] = gMonFootprint_Latios,
    [SPECIES_JIRACHI] = gMonFootprint_Jirachi,
    [SPECIES_DEOXYS] = gMonFootprint_Deoxys,
    [SPECIES_CHIMECHO] = gMonFootprint_Chimecho,
    [SPECIES_LEAFEON] = gMonFootprint_Leafeon,
    [SPECIES_GLACEON] = gMonFootprint_Glaceon,
    [SPECIES_BONSLY] = gMonFootprint_Bonsly,
    [SPECIES_MIMEJR] = gMonFootprint_MimeJr,
    [SPECIES_HAPPINY] = gMonFootprint_Happiny,
    [SPECIES_WEAVILE] = gMonFootprint_Weavile,
    [SPECIES_MAGNEZONE] = gMonFootprint_Magnezone,
    [SPECIES_LICKILICKY] = gMonFootprint_Lickilicky,
    [SPECIES_RHYPERIOR] = gMonFootprint_Rhyperior,
    [SPECIES_TANGROWTH] = gMonFootprint_Tangrowth,
    [SPECIES_ELECTIVIRE] = gMonFootprint_Electivire,
    [SPECIES_MAGMORTAR] = gMonFootprint_Magmortar,
    [SPECIES_TOGEKISS] = gMonFootprint_Togekiss,
    [SPECIES_YANMEGA] = gMonFootprint_Yanmega,
    [SPECIES_GLISCOR] = gMonFootprint_Gliscor,
    [SPECIES_MAMOSWINE] = gMonFootprint_Mamoswine,
    [SPECIES_PORYGON_Z] = gMonFootprint_PorygonZ,
    [SPECIES_GALLADE] = gMonFootprint_Gallade,
    [SPECIES_PROBOPASS] = gMonFootprint_Probopass,
    [SPECIES_DUSKNOIR] = gMonFootprint_Dusknoir,
    [SPECIES_FROSLASS] = gMonFootprint_Froslass,
    [SPECIES_REGIGIGAS] = gMonFootprint_Regigigas,
    [SPECIES_SYLVEON] = gMonFootprint_Eevee,
    [SPECIES_AMBIPOM] = gMonFootprint_Ambipom,
    [SPECIES_HONCHKROW] = gMonFootprint_Honchkrow,
    [SPECIES_MISMAGIUS] = gMonFootprint_Mismagius,
    [SPECIES_ROSERADE] = gMonFootprint_Roserade,
    [SPECIES_MANTYKE] = gMonFootprint_Mantyke,
    [SPECIES_MUNCHLAX] = gMonFootprint_Munchlax,
    [SPECIES_BUDEW] = gMonFootprint_Budew,
    [SPECIES_CHINGLING] = gMonFootprint_Chingling,
    [SPECIES_EGG] = gMonFootprint_Bulbasaur,
};
