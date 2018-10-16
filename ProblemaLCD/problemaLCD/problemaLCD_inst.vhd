	component problemaLCD is
		port (
			botaodescer_external_connection_export            : in  std_logic                    := 'X'; -- export
			botaoentrar_external_connection_export            : in  std_logic                    := 'X'; -- export
			botaosubir_external_connection_export             : in  std_logic                    := 'X'; -- export
			botaovoltar_external_connection_export            : in  std_logic                    := 'X'; -- export
			clk_clk                                           : in  std_logic                    := 'X'; -- clk
			ledazul_external_connection_export                : out std_logic;                           -- export
			ledverde_external_connection_export               : out std_logic;                           -- export
			ledvermelho_external_connection_export            : out std_logic;                           -- export
			reset_reset_n                                     : in  std_logic                    := 'X'; -- reset_n
			conexaolcd_0_rsconduit_writeresponsevalid_n       : out std_logic;                           -- writeresponsevalid_n
			conexaolcd_0_palavraconduit_readdata              : out std_logic_vector(7 downto 0);        -- readdata
			conexaolcd_0_rwconduit_writeresponsevalid_n       : out std_logic;                           -- writeresponsevalid_n
			conexaolcd_0_enableconduit_1_writeresponsevalid_n : out std_logic                            -- writeresponsevalid_n
		);
	end component problemaLCD;

	u0 : component problemaLCD
		port map (
			botaodescer_external_connection_export            => CONNECTED_TO_botaodescer_external_connection_export,            -- botaodescer_external_connection.export
			botaoentrar_external_connection_export            => CONNECTED_TO_botaoentrar_external_connection_export,            -- botaoentrar_external_connection.export
			botaosubir_external_connection_export             => CONNECTED_TO_botaosubir_external_connection_export,             --  botaosubir_external_connection.export
			botaovoltar_external_connection_export            => CONNECTED_TO_botaovoltar_external_connection_export,            -- botaovoltar_external_connection.export
			clk_clk                                           => CONNECTED_TO_clk_clk,                                           --                             clk.clk
			ledazul_external_connection_export                => CONNECTED_TO_ledazul_external_connection_export,                --     ledazul_external_connection.export
			ledverde_external_connection_export               => CONNECTED_TO_ledverde_external_connection_export,               --    ledverde_external_connection.export
			ledvermelho_external_connection_export            => CONNECTED_TO_ledvermelho_external_connection_export,            -- ledvermelho_external_connection.export
			reset_reset_n                                     => CONNECTED_TO_reset_reset_n,                                     --                           reset.reset_n
			conexaolcd_0_rsconduit_writeresponsevalid_n       => CONNECTED_TO_conexaolcd_0_rsconduit_writeresponsevalid_n,       --          conexaolcd_0_rsconduit.writeresponsevalid_n
			conexaolcd_0_palavraconduit_readdata              => CONNECTED_TO_conexaolcd_0_palavraconduit_readdata,              --     conexaolcd_0_palavraconduit.readdata
			conexaolcd_0_rwconduit_writeresponsevalid_n       => CONNECTED_TO_conexaolcd_0_rwconduit_writeresponsevalid_n,       --          conexaolcd_0_rwconduit.writeresponsevalid_n
			conexaolcd_0_enableconduit_1_writeresponsevalid_n => CONNECTED_TO_conexaolcd_0_enableconduit_1_writeresponsevalid_n  --    conexaolcd_0_enableconduit_1.writeresponsevalid_n
		);

