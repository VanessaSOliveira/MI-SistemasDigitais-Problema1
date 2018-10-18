	component ProjetoSemInstruction is
		port (
			clk_clk                                : in    std_logic                    := 'X';             -- clk
			reset_reset_n                          : in    std_logic                    := 'X';             -- reset_n
			botaosubir_external_connection_export  : in    std_logic                    := 'X';             -- export
			botaodescer_external_connection_export : in    std_logic                    := 'X';             -- export
			botaoentrar_external_connection_export : in    std_logic                    := 'X';             -- export
			botaovoltar_external_connection_export : in    std_logic                    := 'X';             -- export
			ledvermelho_external_connection_export : out   std_logic;                                       -- export
			ledverde_external_connection_export    : out   std_logic;                                       -- export
			ledazul_external_connection_export     : out   std_logic;                                       -- export
			lcd_16207_0_external_RS                : out   std_logic;                                       -- RS
			lcd_16207_0_external_RW                : out   std_logic;                                       -- RW
			lcd_16207_0_external_data              : inout std_logic_vector(7 downto 0) := (others => 'X'); -- data
			lcd_16207_0_external_E                 : out   std_logic                                        -- E
		);
	end component ProjetoSemInstruction;

	u0 : component ProjetoSemInstruction
		port map (
			clk_clk                                => CONNECTED_TO_clk_clk,                                --                             clk.clk
			reset_reset_n                          => CONNECTED_TO_reset_reset_n,                          --                           reset.reset_n
			botaosubir_external_connection_export  => CONNECTED_TO_botaosubir_external_connection_export,  --  botaosubir_external_connection.export
			botaodescer_external_connection_export => CONNECTED_TO_botaodescer_external_connection_export, -- botaodescer_external_connection.export
			botaoentrar_external_connection_export => CONNECTED_TO_botaoentrar_external_connection_export, -- botaoentrar_external_connection.export
			botaovoltar_external_connection_export => CONNECTED_TO_botaovoltar_external_connection_export, -- botaovoltar_external_connection.export
			ledvermelho_external_connection_export => CONNECTED_TO_ledvermelho_external_connection_export, -- ledvermelho_external_connection.export
			ledverde_external_connection_export    => CONNECTED_TO_ledverde_external_connection_export,    --    ledverde_external_connection.export
			ledazul_external_connection_export     => CONNECTED_TO_ledazul_external_connection_export,     --     ledazul_external_connection.export
			lcd_16207_0_external_RS                => CONNECTED_TO_lcd_16207_0_external_RS,                --            lcd_16207_0_external.RS
			lcd_16207_0_external_RW                => CONNECTED_TO_lcd_16207_0_external_RW,                --                                .RW
			lcd_16207_0_external_data              => CONNECTED_TO_lcd_16207_0_external_data,              --                                .data
			lcd_16207_0_external_E                 => CONNECTED_TO_lcd_16207_0_external_E                  --                                .E
		);

