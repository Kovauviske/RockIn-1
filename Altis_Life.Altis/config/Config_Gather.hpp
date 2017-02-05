class CfgGather {
    class Resources {
        class apple {
            amount = 8;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
            zoneSize = 30;
        };

        class peach {
            amount = 8;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
            zoneSize = 30;
        };

        class heroin_unprocessed {
            amount = 3;
            zones[] = { "heroin_1" };
            item = "";
            zoneSize = 19;
        };
		
        class malte {
            amount = 1;
            zones[] = { "malte" };
            item = "";
            zoneSize = 11;
        };
		
        class centeio {
            amount = 3;
            zones[] = { "centeio" };
            item = "";
            zoneSize = 19;
        };
		
        class graphics {
            amount = 1;
            zones[] = { "graphics" };
            item = "";
            zoneSize = 5;
        };
		
        class motherboard {
            amount = 1;
            zones[] = { "motherboard" };
            item = "";
            zoneSize = 5;
        };
		
        class processor {
            amount = 1;
            zones[] = { "processor" };
            item = "";
            zoneSize = 5;
        };
		
        class memory {
            amount = 1;
            zones[] = { "memory" };
            item = "";
            zoneSize = 5;
        };
		
        class codeina {
            amount = 3;
            zones[] = { "codeina","codeina_1" };
            item = "";
            zoneSize = 18;
        };
		
	    class kinderovo {
            amount = 3;
            zones[] = { "kinderovo" };
            item = "";
            zoneSize = 18;
        };
		
	    class Papoula {
            amount = 3;
            zones[] = { "Papoula" };
            item = "";
            zoneSize = 23;
        };
		
        class metilfenidato {
            amount = 1;
            zones[] = { "metilfenidato" };
            item = "";
            zoneSize = 5;
        };

        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "cocaine_1" };
            item = "";
            zoneSize = 8;
        };

        class cannabis {
            amount = 3;
            zones[] = { "weed_1" };
            item = "";
            zoneSize = 10;
        };

        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 8;
        };

        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine_1" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 8;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
	        zoneSize = 8;
        };

        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };
		
        class ruby_raw {
            amount = 2;
            zones[] = { "ruby_mine" };
            item = "pickaxe";
            mined[] = { "ruby_raw" };
            zoneSize = 8;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 8;
        };

        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 8;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field", "oil_field_1", "oil_field_2" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 8;
        };
    };
};