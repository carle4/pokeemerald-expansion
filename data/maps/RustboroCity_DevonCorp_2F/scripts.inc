# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with Pokémon.\p"
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Poké Balls…\p"
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Poké Balls!\p"
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Repeat Ball makes it easier to\n"
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch Pokémon you've caught before.\p"
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Timer Ball gets better at catching\n"
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon the longer a battle runs.\p"
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Devon Corporation.\p"
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the PokéNav!\p"
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a PokéNav!\p"
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "President's desire to learn about\l"
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of Pokémon.\p"
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the PokéNav out.$"
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon…\p"
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects Pokémon from fossils…\p"
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a Pokémon fossil?\p"
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that Pokémon\n"
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossil Regenerator.$"
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Devon's technological expertise\n"
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Devon Researcher.$"
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Fossil Regenerator, which I made,\n"
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized Pokémon has been\n"
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient Pokémon.\n"
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Devon Researcher.$"
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many Pokémon.\n"
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the PokéNav…\p"
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_6:
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_9:
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_13
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12:
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15:
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_19
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_18:
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_21:
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_25
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_24:
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_28
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_27:
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_31
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_30:
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_34
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_33:
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_37
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1:
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
	return

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7:
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_6

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10:
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_9

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_13:
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_DOME_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16:
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_OLD_AMBER
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_19:
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_SKULL_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_18

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22:
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ARMOR_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_21

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_25:
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_COVER_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_24

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_28:
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_PLUME_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_27

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_31:
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_JAW_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_30

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_34:
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_SAIL_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_33

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_37:
# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeFossil
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_EventScript_NoticeFossil::
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_2
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_5
RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_4:
	end

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_2:
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_5:
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_Text_0
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_4


RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_2
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1:
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_DOME_FOSSIL
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4:
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_OLD_AMBER
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_8
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_7:
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_11
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_10:
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_14
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_13:
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_SKULL_FOSSIL
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_17
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_16:
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ARMOR_FOSSIL
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_20
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_19:
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_COVER_FOSSIL
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_23
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_22:
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_PLUME_FOSSIL
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_26
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_25:
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_JAW_FOSSIL
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_29
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_28:
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_SAIL_FOSSIL
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_32
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31:
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_1, ITEM_NONE
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0xFF, DYN_MULTICHOICE_CB_SHOW_ITEM
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil
	return

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_2:
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_HELIX_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5:
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_DOME_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_8:
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_OLD_AMBER
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_7

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_11:
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_ROOT_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_10

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_14:
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_CLAW_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_13

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_17:
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SKULL_FOSSIL
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_SKULL_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_16

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_20:
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ARMOR_FOSSIL
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_ARMOR_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_19

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_23:
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_COVER_FOSSIL
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_COVER_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_22

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_26:
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PLUME_FOSSIL
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_PLUME_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_25

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_29:
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JAW_FOSSIL
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_JAW_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_28

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_32:
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SAIL_FOSSIL
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, ITEM_SAIL_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31


RustboroCity_DevonCorp_2F_EventScript_GiveFossil::
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_1
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_RESULT
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_HELIX_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_5
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_4:
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_DOME_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_8
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_7:
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_OLD_AMBER
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_11
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_10:
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_ROOT_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_14
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_13:
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_CLAW_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_17
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_16:
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_SKULL_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_20
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_19:
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_ARMOR_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_23
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_22:
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_COVER_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_26
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_25:
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_PLUME_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_29
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_28:
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_JAW_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_32
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_31:
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, ITEM_SAIL_FOSSIL
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_GiveFossil_35
RustboroCity_DevonCorp_2F_EventScript_GiveFossil_34:
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem VAR_RESULT
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_1:
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_5:
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_HELIX_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_4

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_8:
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_DOME_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_7

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_11:
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_OLD_AMBER
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_10

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_14:
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_ROOT_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_13

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_17:
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_CLAW_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_16

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_20:
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_SKULL_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_19

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_23:
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_ARMOR_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_22

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_26:
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_COVER_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_25

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_29:
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_PLUME_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_28

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_32:
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_JAW_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_31

RustboroCity_DevonCorp_2F_EventScript_GiveFossil_35:
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_SAIL_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil_34


RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_WHICH_FOSSIL_REVIVED
# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_HELIX_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_3
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_DOME_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_4
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_OLD_AMBER, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_5
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_ROOT_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_6
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_CLAW_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_7
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_SKULL_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_8
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_ARMOR_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_9
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_COVER_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_10
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_PLUME_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_11
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_JAW_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_12
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_SAIL_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_13
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1:
# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveMon
	return

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_3:
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_OMANYTE
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OMANYTE
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_4:
# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_KABUTO
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KABUTO
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_5:
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_AERODACTYL
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AERODACTYL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_6:
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_7:
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_8:
# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRANIDOS
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CRANIDOS
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_9:
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SHIELDON
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHIELDON
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_10:
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TIRTOUGA
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TIRTOUGA
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_11:
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ARCHEN
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCHEN
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_12:
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TYRUNT
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYRUNT
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_13:
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_AMAURA
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AMAURA
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1


RustboroCity_DevonCorp_2F_EventScript_ReceiveMon::
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 15
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveMon_2
RustboroCity_DevonCorp_2F_EventScript_ReceiveMon_1:
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveMon_5
RustboroCity_DevonCorp_2F_EventScript_ReceiveMon_4:
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveMon_2:
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveMonParty
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveMon_1

RustboroCity_DevonCorp_2F_EventScript_ReceiveMon_5:
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveMonPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveMon_4


RustboroCity_DevonCorp_2F_EventScript_ReceiveMonParty::
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedMonFanfare
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveMonParty_2
RustboroCity_DevonCorp_2F_EventScript_ReceiveMonParty_1:
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveMonParty_2:
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveMonParty_1


RustboroCity_DevonCorp_2F_EventScript_ReceiveMonPC::
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedMonFanfare
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveMonPC_2
RustboroCity_DevonCorp_2F_EventScript_ReceiveMonPC_1:
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveMonPC_2:
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveMonPC_1


RustboroCity_DevonCorp_2F_EventScript_ReceivedMonFanfare::
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	showmonpic VAR_TEMP_TRANSFERRED_SPECIES, 10, 3
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 412 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	hidemonpic
# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
	return


RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_Text_0:
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Which fossil should I restore for you?$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0:
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_1}$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_1:
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Cancel$"
