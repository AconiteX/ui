	<Page
		BackgroundOpacity='0.70'
		Name='MsgBox'
		PackSize='1,1'
		ScrollExtent='1024,768'
		Size='1024,768'
		Visible='false'
		VisualEditLock='true'
	>
		<Image
			Location='29,259'
			Name='ChatSpout'
			ScrollExtent='11,41'
			Size='11,41'
			Style='/Styles.chatBubbles.spout.social'
		/>
		<Page
			Location='227,123'
			MinimumSize='248,100'
			Name='InnerPage'
			PackSize='p,p'
			RStyleDefault='rs_default'
			ScrollExtent='392,249'
			Size='392,249'
			UserMovable='true'
		>
			<Composite
				BackgroundColor='#FFFFFF'
				Location='19,15'
				Name='comp'
				OnEnable='parent.compBg.size=size
parent.compBg.location=location'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				Padding='Both'
				ScrollExtent='355,237'
				Size='355,222'
				Spacing='9'
				SpacingType='Constant'
			>
				<Page
					BackgroundColor='#FF0000'
					Location='0,4'
					Name='pText'
					PackSize='a,f'
					ScrollExtent='355,49'
					Size='355,49'
				>
					<Text
						BackgroundTint='#000000'
						Font='bold_13'
						LocalText='text'
						Location='12,0'
						Name='text'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalText='text1'
						RStyleDefault='rs_default'
						ScrollExtent='331,49'
						Size='331,49'
						TextColor='#96F4FC'
					>text</Text>
					<Scrollbar
						Control='MessageText'
						Enabled='false'
						Location='344,6'
						Name='scroll'
						OnDisable='opacity=0.0'
						OnEnable='opacity=1.0'
						Opacity='0.00'
						PackLocation='fff,nfn'
						PackSize='f,a'
						ScrollExtent='11,43'
						Size='11,43'
						Style='/Styles.scrollbar.default.vHud4.style'
					>
					</Scrollbar>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundTint='#00FFFF'
						Name='compBg'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='outline1'
						ScrollExtent='355,49'
						Size='355,49'
						Visible='false'
					>
						<Page
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='355,49'
							Size='355,49'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.80'
							BackgroundTint='#00D6FB'
							Location='2,2'
							Name='inFrame'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.whitebox_palW.rs_default'
							ScrollExtent='351,44'
							Size='351,44'
						/>
					</Page>
				</Page>
				<Page
					Location='2,62'
					Name='verifyPage'
					PackSize='a,f'
					ScrollExtent='345,84'
					Selectable='true'
					Size='345,84'
				>
					<Image
						AutoRegister='true'
						GetsInput='true'
						Location='10,8'
						Name='image'
						ScrollExtent='64,64'
						Size='64,64'
						SourceRect='224,272,247,296'
						SourceResource='ui_rebel_final'
						Visible='false'
					/>
				</Page>
				<Page
					Location='2,155'
					Name='inputText'
					PackSize='a,f'
					ScrollExtent='345,23'
					Selectable='true'
					Size='345,23'
				>
					<Text
						BackgroundTint='#03546B'
						Editable='true'
						EditableUnicode='true'
						Font='normal_12'
						GetsInput='true'
						IME='true'
						Location='6,4'
						MaxLines='0'
						Name='text'
						PackSize='a,a'
						PalBgTint='back3'
						PalText='text1'
						ParentSize='true'
						PreLocalized='true'
						RStyleDefault='/Styles.New.pill_lrg.rs_default'
						ScrollExtent='333,14'
						Size='333,14'
						TextColor='#96F4FC'
					></Text>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#03546B'
						Enabled='false'
						GetsInput='false'
						MaximumSize='345,23'
						MinimumSize='345,23'
						Name='box'
						PalBgTint='back3'
						ParentSize='true'
						RStyleDefault='/Styles.New.pill_lrg.rs_default'
						ScrollExtent='345,23'
						Size='345,23'
					/>
				</Page>
				<Runner
					Color='#1CFFFF'
					Location='90,187'
					MaximumSize='179,20'
					Name='runner'
					PackLocation='cfc'
					PackSize='f,f'
					PalColor='runner'
					RunDelayAdvance='250'
					RunDelayRestart='0'
					RunEffectorsOff='/effectors.opacity.slow.fadeout'
					RunEffectorsOn='/effectors.opacity.fast.fadefull'
					RunPaused='false'
					RunSimultaneous='2'
					ScrollExtent='175,20'
					Size='175,20'
				>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='6,4'
						Name='p'
						Opacity='0.00'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='23,4'
						Name='p'
						Opacity='0.00'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='40,4'
						Name='p'
						Opacity='0.00'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='57,4'
						Name='p'
						Opacity='0.00'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='74,4'
						Name='p'
						Opacity='0.00'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='91,4'
						Name='p'
						Opacity='0.00'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='108,4'
						Name='p'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='125,4'
						Name='p'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='142,4'
						Name='p'
						Opacity='0.00'
						ScrollExtent='15,14'
						Size='15,14'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						Location='159,4'
						Name='p'
						Opacity='0.00'
						ScrollExtent='15,14'
						Size='15,14'
					/>
				</Runner>
				<Composite
					Alignment='Back'
					BackgroundColor='#0000FF'
					Location='0,216'
					MaximumSize='16384,17'
					MinimumSize='0,17'
					Name='cButtons'
					Orientation='Horizontal'
					PackSize='p,f'
					Padding='Both'
					ScrollExtent='355,17'
					Size='355,17'
					Spacing='12'
				>
					<Button
						LocalText='test1234567890test1234567890'
						Location='38,0'
						MinimumSize='100,0'
						Name='b'
						PackSize='f,a'
						ScrollExtent='101,17'
						Size='101,17'
						Style='/Styles.New.buttons.hud.style'
					>test1234567890test1234567890</Button>
					<Button
						LocalText='test1234567890test1234567890'
						Location='215,0'
						MinimumSize='100,0'
						Name='b'
						PackSize='f,a'
						ScrollExtent='101,17'
						Size='101,17'
						Style='/Styles.New.buttons.hud.style'
					>test1234567890test1234567890</Button>
				</Composite>
			</Composite>
			<Page
				BackgroundOpacity='1.00'
				Name='dummyselectable'
				Opacity='0.00'
				RStyleDefault='rs_default'
				Selectable='true'
				UserMovable='true'
			/>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='392,249'
				Size='392,249'
			>
				<Page
					BackgroundColor='#FFFFFF'
					labelInstantSale.visible='false'
					Location='367,5'
					Name='mmc'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.thin_mmc2.rs_default'
					ScrollExtent='14,14'
					Size='14,14'
					textboxInstantSale.enabled='false'
				>
					<Button
						BackgroundTint='#27BECB'
						DragType='uicommand'
						Location='12,1'
						Name='min'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalBgTint='accentlight'
						ScrollExtent='13,12'
						Size='13,12'
						Style='/Styles.Frame.buttonMaximize.style'
						TextColor='#000000'
						Visible='false'
					></Button>
					<Button
						BackgroundColor='#FFFFFF'
						IsCancelButton='true'
						Name='close'
						OnHide='parent.dark.visible=false'
						OnShow='parent.dark.visible=true'
						PackLocation='fff,cfc'
						PackSize='f,f'
						ScrollExtent='14,14'
						Size='14,14'
						Style='/Styles.Frame.buttonCloseDark.style'
					></Button>
					<Button
						BackgroundTint='#27BECB'
						DragType='uicommand'
						Location='13,0'
						Name='max'
						PackLocation='nfn,cfc'
						PackSize='f,f'
						PalBgTint='accentlight'
						ScrollExtent='13,12'
						Size='13,12'
						Style='/Styles.Frame.buttonMaximize.style'
						TextColor='#000000'
						Visible='false'
					></Button>
					<Page
						Location='-5,0'
						Name='dark'
						PackLocation='fff,cfc'
						PackSize='f,f'
						RStyleDefault='/Styles.New.thin_mmc.rs_default'
						ScrollExtent='20,14'
						Size='20,14'
					/>
				</Page>
				<Page
					Location='10,0'
					Name='bg'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					RStyleDefault='rs_default'
					ScrollExtent='372,246'
					Size='372,246'
				>
					<Page
						GetsInput='false'
						Name='outline'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						RStyleDefault='/Styles.New.chat.small.rs_default'
						ScrollExtent='372,246'
						Selectable='true'
						Size='372,246'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.70'
							BackgroundTint='#00D6FB'
							Location='1,0'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.chat.small.rs_default'
							ScrollExtent='371,246'
							Size='371,246'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.30'
							BackgroundTint='#00D6FB'
							Location='5,8'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.whitebox_palW.rs_default'
							ScrollExtent='364,233'
							Size='364,233'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.70'
							BackgroundTint='#00D6FB'
							Location='0,1'
							Name='inFrame'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
							ScrollExtent='373,245'
							Size='373,245'
						/>
					</Page>
				</Page>
				<Page
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Name='corners'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='baselight'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='392,249'
					Selectable='true'
					Size='392,249'
				>
					<Page
						BackgroundOpacity='1.00'
						Location='346,0'
						Name='main_TR'
						PackLocation='fff,nfn'
						PackSize='f,f'
						RStyleDefault='/Styles.New.corner_chatTR.rs_default'
						ScrollExtent='46,45'
						Size='46,45'
					/>
					<Page
						BackgroundOpacity='1.00'
						Location='346,213'
						MaximumSize='200,36'
						MinimumSize='30,29'
						Name='main_BR'
						PackLocation='fff,fff'
						PackSize='f,f'
						RStyleDefault='/Styles.New.corner_chatBR.rs_default'
						ScrollExtent='46,36'
						Size='46,36'
					/>
					<Page
						BackgroundOpacity='1.00'
						MinimumSize='22,40'
						Name='main_TL'
						PackLocation='nfn,nfn'
						PackSize='f,f'
						RStyleDefault='/Styles.New.corner_chatTL.rs_default'
						ScrollExtent='22,45'
						Size='22,45'
					/>
					<Page
						BackgroundOpacity='1.00'
						Location='0,213'
						MinimumSize='28,0'
						Name='main_BL'
						PackLocation='nfn,fff'
						PackSize='f,f'
						RStyleDefault='/Styles.New.corner_chatBL.rs_default'
						ScrollExtent='28,36'
						Size='28,36'
					/>
				</Page>
				<Page
					BackgroundOpacity='0.80'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='13,5'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.thin_message.rs_default'
					ScrollExtent='368,241'
					Selectable='true'
					Size='368,241'
					Visible='false'
				/>
			</Page>
		</Page>
		<Page
			BackgroundColor='#00AAFF'
			BackgroundOpacity='0.50'
			BackgroundTint='#00AAFF'
			Location='253,375'
			Name='chatbubbles'
			RStyleDefault='/Styles.chatBubbles.rect.thought.rs'
			ScrollExtent='749,356'
			Size='749,356'
		>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='group group group group group '
				Location='123,6'
				Margin='15,5,10,10'
				MinimumSize='16,16'
				Name='ChatBubbleGroup'
				RStyleDefault='/Styles.chatBubbles.rect.group.rs'
				ScrollExtent='129,72'
				Size='129,71'
				TextColor='#000000'
			>group group group group group </Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='advertise'
				Location='8,6'
				Margin='5,10,10,5'
				MinimumSize='16,16'
				Name='ChatBubbleAdvertise'
				RStyleDefault='/Styles.chatBubbles.rect.advertise.rs'
				ScrollExtent='107,64'
				Size='107,64'
				TextColor='#000000'
			>advertise</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_16'
				LocalText='exclaim'
				Location='238,208'
				MinimumSize='16,16'
				Name='ChatBubbleText2'
				RStyleDefault='/Styles.chatBubbles.rect.exclaim.rs'
				ScrollExtent='112,48'
				Size='112,48'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>exclaim</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='default'
				Location='124,210'
				MinimumSize='16,16'
				Name='ChatBubbleDefault'
				RStyleDefault='/Styles.chatBubbles.rect.default.rs'
				ScrollExtent='94,42'
				Size='94,42'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>default</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='whisper'
				Location='478,82'
				MinimumSize='16,16'
				Name='ChatBubbleWhisper'
				RStyleDefault='/Styles.chatBubbles.rect.whisper.rs'
				ScrollExtent='107,44'
				Size='107,44'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>whisper</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='moan'
				Location='6,78'
				Margin='10,6,10,6'
				MinimumSize='16,16'
				Name='ChatBubbleMoan'
				RStyleDefault='/Styles.chatBubbles.rect.moan.rs'
				ScrollExtent='107,64'
				Size='107,64'
				TextColor='#000000'
			>moan</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='threaten'
				Location='472,138'
				MinimumSize='16,16'
				Name='ChatBubbleThreaten'
				RStyleDefault='/Styles.chatBubbles.rect.threaten.rs'
				ScrollExtent='114,59'
				Size='114,59'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>threaten</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='shout'
				Location='600,78'
				Margin='16,14,16,14'
				MinimumSize='16,16'
				Name='ChatBubbleShout'
				RStyleDefault='/Styles.chatBubbles.rect.shout.rs'
				ScrollExtent='82,72'
				Size='82,72'
				TextColor='#000000'
			>shout</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='icy'
				Location='256,84'
				Margin='12,4,12,16'
				MinimumSize='16,16'
				Name='ChatBubbleIcey'
				RStyleDefault='/Styles.chatBubbles.rect.icy.rs'
				ScrollExtent='76,52'
				Size='76,52'
				TextAlignmentVertical='Bottom'
				TextColor='#000000'
			>icy</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='sarcastic'
				Location='252,146'
				MinimumSize='16,16'
				Name='ChatBubbleSarcastic'
				RStyleDefault='/Styles.chatBubbles.rect.sarcastic.rs'
				ScrollExtent='84,53'
				Size='84,53'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>sarcastic</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='droid'
				Location='4,148'
				Margin='14,10,14,10'
				MinimumSize='16,16'
				Name='ChatBubbleDroid'
				RStyleDefault='/Styles.chatBubbles.rect.droid.rs'
				ScrollExtent='92,56'
				Size='92,56'
				TextColor='#000000'
			>droid</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='double_ring'
				Location='356,144'
				Margin='8,4,8,4'
				MinimumSize='16,16'
				Name='ChatBubbleDoubleRing'
				RStyleDefault='/Styles.chatBubbles.rect.double_ring.rs'
				ScrollExtent='107,52'
				Size='107,52'
				TextColor='#000000'
			>double_ring</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='chatter'
				Location='354,82'
				MinimumSize='16,16'
				Name='ChatBubbleChatter'
				RStyleDefault='/Styles.chatBubbles.rect.chatter.rs'
				ScrollExtent='107,44'
				Size='107,44'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>chatter</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='shutter'
				Location='128,150'
				MinimumSize='16,16'
				Name='ChatBubbleStutter'
				RStyleDefault='/Styles.chatBubbles.rect.stutter.rs'
				ScrollExtent='107,42'
				Size='107,42'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>shutter</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='scream'
				Location='116,78'
				Margin='16,12,16,12'
				MinimumSize='16,16'
				Name='ChatBubbleScream'
				RStyleDefault='/Styles.chatBubbles.rect.scream.rs'
				ScrollExtent='107,64'
				Size='107,64'
				TextColor='#000000'
			>scream</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='sing'
				Location='135,274'
				MinimumSize='16,16'
				Name='ChatBubbleSing'
				RStyleDefault='/Styles.chatBubbles.rect.sing.rs'
				ScrollExtent='99,35'
				Size='99,35'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>sing</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='evil'
				Location='8,270'
				Margin='18,18,10,6'
				MinimumSize='16,16'
				Name='ChatBubbleEvil'
				RStyleDefault='/Styles.chatBubbles.rect.evil.rs'
				ScrollExtent='107,64'
				Size='107,64'
				TextColor='#000000'
			>evil</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='sing2'
				Location='248,271'
				Margin='10,6,10,6'
				MinimumSize='16,16'
				Name='ChatBubbleSing2'
				RStyleDefault='/Styles.chatBubbles.rect.sing2.rs'
				ScrollExtent='104,64'
				Size='104,64'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>sing2</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='sing3'
				Location='609,236'
				Margin='10,6,10,6'
				MinimumSize='16,16'
				Name='ChatBubbleSing3'
				RStyleDefault='/Styles.chatBubbles.rect.sing3.rs'
				ScrollExtent='108,41'
				Size='108,41'
				TextColor='#000000'
			>sing3</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='sad'
				Location='607,163'
				Margin='10,6,10,6'
				MinimumSize='16,16'
				Name='ChatBubbleSad'
				RStyleDefault='/Styles.chatBubbles.rect.sad.rs'
				ScrollExtent='107,64'
				Size='107,64'
				TextColor='#000000'
			>sad</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='evil2'
				Location='476,200'
				Margin='10,6,10,6'
				MinimumSize='16,16'
				Name='ChatBubbleEvil2'
				RStyleDefault='/Styles.chatBubbles.rect.evil2.rs'
				ScrollExtent='107,64'
				Size='107,64'
				TextColor='#000000'
			>evil2</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_18'
				LocalText='poetry'
				Location='356,200'
				Margin='10,6,10,6'
				MinimumSize='16,16'
				Name='ChatBubblePoetry'
				RStyleDefault='/Styles.chatBubbles.rect.poetry.rs'
				ScrollExtent='107,64'
				Size='107,64'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
				TextColor='#000000'
			>poetry</Text>
			<Image
				Location='586,24'
				Name='ChatSpoutSing2'
				ScrollExtent='11,26'
				Size='11,26'
				Style='/Styles.chatBubbles.spout.sing2'
			/>
			<Image
				Location='495,24'
				Name='ChatSpoutSing'
				ScrollExtent='11,15'
				Size='11,15'
				Style='/Styles.chatBubbles.spout.sing'
			/>
			<Image
				Location='561,16'
				Name='ChatSpoutEvil'
				ScrollExtent='19,26'
				Size='19,26'
				Style='/Styles.chatBubbles.spout.evil'
			/>
			<Image
				Location='516,26'
				Name='ChatSpoutThought'
				ScrollExtent='14,43'
				Size='14,43'
				Style='/Styles.chatBubbles.spout.Thought'
			/>
		</Page>
		<Page
			Location='40,542'
			Name='ChatBubbleIcon'
			ScrollExtent='38,24'
			Size='38,24'
		>
			<Image
				Color='#FF0000'
				Name='Ring'
				PackSize='1,1'
				ScrollExtent='38,24'
				Size='38,24'
				Style='/Styles.chatBubbles.Icon.Ring'
				VisualEditLock='true'
			/>
			<Image
				Name='Inner'
				PackSize='1,1'
				ScrollExtent='38,24'
				Size='38,24'
				Style='/Styles.chatBubbles.Icon.Inner'
				VisualEditLock='true'
			/>
			<Image
				Name='Outer'
				PackSize='1,1'
				ScrollExtent='38,24'
				Size='38,24'
				Style='/Styles.chatBubbles.Icon.outer.Thought'
				VisualEditLock='true'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Location='0,8'
			Name='TextPage'
			RStyleDefault='rs_default'
			ScrollExtent='192,117'
			Size='192,117'
		>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				RStyleDefault='rs_default'
				ScrollExtent='192,117'
				Size='192,117'
				VisualEditLock='true'
			>
				<Page
					GetsInput='false'
					Name='outline'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='192,117'
					Selectable='true'
					Size='192,117'
				>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.70'
						BackgroundTint='#1CFFFF'
						Name='outline'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='line1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='192,117'
						Size='192,117'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.40'
						BackgroundTint='#00D6FB'
						Location='6,11'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.whitebox_palW.rs_default'
						ScrollExtent='180,97'
						Size='180,97'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.70'
						BackgroundTint='#00D6FB'
						Name='inFrame'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
						ScrollExtent='192,117'
						Size='192,117'
					/>
				</Page>
			</Page>
		</Page>
		<Text
			Font='fixed_14'
			LocalText='These objects are templates for messagebox creation.'
			Location='-2,2'
			Name='Note'
			ScrollExtent='800,42'
			Size='800,42'
		>These objects are templates for messagebox creation.</Text>
		<Progressbar
			BackgroundOpacity='1.00'
			Location='240,28'
			Name='Progressbar'
			Progress='0.70'
			ScrollExtent='560,24'
			Size='560,24'
			Style='Style'
		/>
		<Text
			BackgroundOpacity='1.00'
			Font='default_18'
			LocalText='thought'
			Location='8,312'
			MinimumSize='16,16'
			Name='ChatBubbleText'
			RStyleDefault='/Styles.chatBubbles.rect.thought.rs'
			ScrollExtent='88,52'
			Size='88,52'
			TextAlignment='Center'
			TextAlignmentVertical='Center'
			TextColor='#000000'
		>thought</Text>
	</Page>